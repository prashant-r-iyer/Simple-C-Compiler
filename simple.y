/*
 * CS250
 *
 * simple.y: simple parser for the simple "C" language
 * 
 */

%token	<string_val> WORD

%token 	NOTOKEN LPARENT RPARENT LBRACE RBRACE LCURLY RCURLY COMA SEMICOLON EQUAL STRING_CONST LONG LONGSTAR VOID CHARSTAR CHARSTARSTAR INTEGER_CONST AMPERSAND OROR ANDAND EQUALEQUAL NOTEQUAL LESS GREAT LESSEQUAL GREATEQUAL PLUS MINUS TIMES DIVIDE PERCENT IF ELSE WHILE DO FOR CONTINUE BREAK RETURN

%union	{
		char *string_val;
		int nargs;
		int my_nlabel;
	}

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex();
int yyerror(const char * s);

extern int line_number;
const char * input_file;
char * asm_file;
FILE * fasm;

#define MAX_ARGS 5
int nargs;
char * args_table[MAX_ARGS];

#define MAX_GLOBALS 100
int nglobals = 0;
char * global_vars_table[MAX_GLOBALS];

#define MAX_LOCALS 32
#define MAX_LOCALS_SPACE (8 * MAX_LOCALS)
int nlocals = 0;
char * local_vars_table[MAX_LOCALS];

#define MAX_STRINGS 100
int nstrings = 0;
char * string_table[MAX_STRINGS];

char * string_variable_table[MAX_LOCALS + MAX_GLOBALS];
int string_variable_count = 0;

char *regStk[]={ "rbx", "r10", "r13", "r14", "r15", "r11", "r9"};
char nregStk = sizeof(regStk)/sizeof(char*);

char *regByte[]={ "bl", "r10b", "r13b", "r14b", "r15b", "r11b", "r9b"};

char *regArgs[]={ "rdi", "rsi", "rdx", "rcx", "r8", "r9"};
char nregArgs = sizeof(regArgs)/sizeof(char*);

int top = 0;
int nargs = 0;

int nlabelwhile = 1;
int nlabelif = 1;
int nlabeldowhile = 1;
int nlabelfor = 1;

int currentloop = 0;
int currentforcount = 0;
int currentwhilecount = 0;
int currentdowhilecount = 0;

int currentvarischar = 0;

int var_id = -1;

int and_label = 0;
int or_label = 0;

int ischar(char *var) {
	for (int i = 0; i < string_variable_count; i++) {
		if (strcmp(string_variable_table[i], var) == 0) {
			return 1;
		}
	}

	return 0;
}

%}

%%

goal:
	program;

program:
    function_or_var_list;

function_or_var_list:
	function_or_var_list function
	| function_or_var_list global_var
	| /*empty */
	;

function:
	var_type WORD {
		fprintf(fasm, "\t.text\n");
		fprintf(fasm, "\n.globl %s\n", $2);
		fprintf(fasm, "%s:\n", $2);

		fprintf(fasm, "\t# Save Frame pointer\n");
		fprintf(fasm, "\tpushq %%rbp\n");
		fprintf(fasm, "\tmovq %%rsp, %%rbp\n");

		fprintf(fasm, "\tsubq $%d, %%rsp\n", MAX_LOCALS_SPACE);

		fprintf(fasm, "\tpushq %%rbx\n");
		fprintf(fasm, "\tpushq %%rbx\n");
		fprintf(fasm, "\tpushq %%r10\n");
		fprintf(fasm, "\tpushq %%r13\n");
		fprintf(fasm, "\tpushq %%r14\n");
		fprintf(fasm, "\tpushq %%r15\n");
		fprintf(fasm, "\tpushq %%r11\n");
		fprintf(fasm, "\tpushq %%r9\n");

		nlocals = 0;
	}
	LPARENT arguments {
		for (int i = 0; i < nlocals; i++) {
			fprintf(fasm, "\tmovq %%%s, -%d(%%rbp)\n", regArgs[i], 8 * (i + 1));
		}
	}
	RPARENT compound_statement {
		fprintf(fasm, "\n\t# Restore registers\n");
		fprintf(fasm, "\tpopq %%r9\n");
		fprintf(fasm, "\tpopq %%r11\n");
		fprintf(fasm, "\tpopq %%r15\n");
		fprintf(fasm, "\tpopq %%r14\n");
		fprintf(fasm, "\tpopq %%r13\n");
		fprintf(fasm, "\tpopq %%r10\n");
		fprintf(fasm, "\tpopq %%rbx\n");
		fprintf(fasm, "\tpopq %%rbx\n");

		fprintf(fasm, "\taddq $%d, %%rsp\n", MAX_LOCALS_SPACE);

		fprintf(fasm, "\n\tleave\n");
		fprintf(fasm, "\tret\n\n");
	}
	;

arg_list:
	arg
	| arg_list COMA arg
	;

arguments:
	arg_list
	| /*empty*/
	;

arg:
	var_type WORD {
		local_vars_table[nlocals] = $<string_val>2;
		nlocals++;

		if (var_id == 1) {
			string_variable_table[string_variable_count] = $<string_val>2;
			string_variable_count++;
		}
	}
	;

global_var: 
	var_type global_var_list SEMICOLON;

global_var_list:
	WORD {
		fprintf(fasm, "\t.data\n");
		fprintf(fasm, "\t.comm %s, 8\n", $1);

		global_vars_table[nglobals] = $1;
		

		if (var_id == 1) {
			string_variable_table[string_variable_count] = $1;
			string_variable_count++;
		}

		nglobals++;
	}
	| global_var_list COMA WORD {
		fprintf(fasm, "\t.comm %s, 8\n", $3);

		global_vars_table[nglobals] = $3;
		nglobals++;
	}
	;

var_type:
	CHARSTAR {
		var_id = 1;
	}
	| CHARSTARSTAR {
		var_id = 2;
	}
	| LONG {
		var_id = 3;
	}
	| LONGSTAR {
		var_id = 4;
	}
	| VOID {
		var_id = 5;
	}
	;

assignment:
	WORD EQUAL expression {
		int pos = -1;
		char *variable = $1;
		for (int i = 0; i < nlocals; i++) {
			if (strcmp(local_vars_table[i], variable) == 0) {
				pos = i;
				break;
			}
		}

		if (pos == -1) {
			fprintf(fasm, "\tmovq %%%s, %s\n", regStk[top - 1], $1);
		}
		else {
			fprintf(fasm, "\tmovq %%%s, -%d(%%rbp)\n", regStk[top - 1], 8 * (pos + 1));
		}
		top--;
	}
	| WORD LBRACE expression RBRACE EQUAL expression {
		if (ischar($1)) {
			int pos = -1;
			char *variable = $1;
			for (int i = 0; i < nlocals; i++) {
				if (strcmp(local_vars_table[i], variable) == 0) {
					pos = i;
					break;
				}
			}

			if (pos == -1) {
				fprintf(fasm, "\taddq %s, %%%s\n", $1, regStk[top - 2]);
			}
			else {
				fprintf(fasm, "\taddq -%d(%%rbp), %%%s\n", 8 * (pos + 1), regStk[top - 2]);
			}
			fprintf(fasm, "\tmovq $0, %%%s\n", regStk[top]);
			fprintf(fasm, "\tmovb %%%s, %%%s\n", regByte[top - 1], regByte[top]);
			fprintf(fasm, "\tmovq %%%s, (%%%s)\n", regStk[top], regStk[top - 2]);

			top -= 2;
		}
		else {
			int pos = -1;
			char *variable = $1;
			for (int i = 0; i < nlocals; i++) {
				if (strcmp(local_vars_table[i], variable) == 0) {
					pos = i;
					break;
				}
			}

			if (pos == -1) {
				fprintf(fasm, "\timulq $8, %%%s\n", regStk[top - 2]);
				fprintf(fasm, "\taddq %s, %%%s\n", $1, regStk[top - 2]);
				fprintf(fasm, "\tmovq %%%s, (%%%s)\n", regStk[top - 1], regStk[top - 2]);
			}
			else {
				fprintf(fasm, "\timulq $8, %%%s\n", regStk[top - 2]);
				fprintf(fasm, "\taddq -%d(%%rbp), %%%s\n", 8 * (pos + 1), regStk[top - 2]);
				fprintf(fasm, "\tmovq %%%s, (%%%s)\n", regStk[top - 1], regStk[top - 2]);
			}
			top -= 2;
		}
		
	}
	;

call:
	WORD LPARENT call_arguments RPARENT {
		char * funcName = $<string_val>1;
		int nargs = $<nargs>3;
		int i;

		fprintf(fasm,"\t# func=%s nargs=%d\n", funcName, nargs);
		fprintf(fasm,"\n\t# Move values from reg stack to reg args\n");

		for (i = nargs - 1; i >= 0; i--) {
			top--;
			fprintf(fasm, "\tmovq %%%s, %%%s\n", regStk[top], regArgs[i]);
		}

		if (!strcmp(funcName, "printf")) {
			fprintf(fasm, "\tmovl $0, %%eax\n");
		}
		
		fprintf(fasm, "\tcall %s\n", funcName);
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top]);
		top++;
	}
	;

call_arg_list:
	expression {
		$<nargs>$=1;
	}
	| call_arg_list COMA expression {
		$<nargs>$++;
	}
	;

call_arguments:
	call_arg_list {
		$<nargs>$=$<nargs>1;
	}
	| /*empty*/ {
		$<nargs>$=0;
	}
	;

expression:
	logical_or_expr
	;

logical_or_expr:
	logical_and_expr
	| logical_or_expr {
		fprintf(fasm, "or_start_%d:\n", or_label);

		fprintf(fasm, "\tmovq $1, %%rax\n");

		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tjne or_end_%d\n", or_label);
	}
	OROR logical_and_expr {
		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tjne or_end_%d\n", or_label);

		fprintf(fasm, "\tmovq $0, %%rax\n");

		fprintf(fasm, "or_end_%d:\n", or_label);
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);

		or_label++;
		top--;
	}
	;

logical_and_expr:
	equality_expr
	| logical_and_expr {
		fprintf(fasm, "and_start_%d:\n", and_label);

		fprintf(fasm, "\tmovq $0, %%rax\n");

		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tje and_end_%d\n", and_label);
	}
	ANDAND equality_expr {
		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tje and_end_%d\n", and_label);

		fprintf(fasm, "\tmovq $1, %%rax\n");

		fprintf(fasm, "and_end_%d:\n", and_label);
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);

		and_label++;
		top--;
	}
	;

equality_expr:
	relational_expr
	| equality_expr EQUALEQUAL relational_expr {
		fprintf(fasm, "\tmovq $0, %%rax\n");
		fprintf(fasm, "\tcmpq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
		fprintf(fasm, "\tsete %%al\n");
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);
		top--;
	}
	| equality_expr NOTEQUAL relational_expr {
		fprintf(fasm, "\tmovq $0, %%rax\n");
		fprintf(fasm, "\tcmpq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
		fprintf(fasm, "\tsetne %%al\n");
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);
		top--;
	}
	;

relational_expr:
	additive_expr
	| relational_expr LESS additive_expr {
		fprintf(fasm, "\tmovq $0, %%rax\n");
		fprintf(fasm, "\tcmpq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
		fprintf(fasm, "\tsetl %%al\n");
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);
		top--;
	}
	| relational_expr GREAT additive_expr {
		fprintf(fasm, "\tmovq $0, %%rax\n");
		fprintf(fasm, "\tcmpq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
		fprintf(fasm, "\tsetg %%al\n");
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);
		top--;
	}
	| relational_expr LESSEQUAL additive_expr {
		fprintf(fasm, "\tmovq $0, %%rax\n");
		fprintf(fasm, "\tcmpq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
		fprintf(fasm, "\tsetle %%al\n");
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);
		top--;
	}
	| relational_expr GREATEQUAL additive_expr {
		fprintf(fasm, "\tmovq $0, %%rax\n");
		fprintf(fasm, "\tcmpq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
		fprintf(fasm, "\tsetge %%al\n");
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);
		top--;
	}
	;

additive_expr:
	multiplicative_expr
	| additive_expr PLUS multiplicative_expr {
		fprintf(fasm,"\n\t# +\n");
		if (top < nregStk) {
			fprintf(fasm, "\taddq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
			top--;
		}
	}
	| additive_expr MINUS multiplicative_expr {
		fprintf(fasm,"\n\t# -\n");
		if (top < nregStk) {
			fprintf(fasm, "\tsubq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
			top--;
		}
	}
	;

multiplicative_expr:
	primary_expr
	| multiplicative_expr TIMES primary_expr {
		fprintf(fasm, "\n\t# *\n");
		if (top < nregStk) {
			fprintf(fasm, "\timulq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
			top--;
		}
	}
	| multiplicative_expr DIVIDE primary_expr {
		fprintf(fasm, "\n\t# /\n");
		if (top < nregStk) {
			fprintf(fasm, "\tmovq %%%s, %%rax\n", regStk[top - 2]);
			fprintf(fasm, "\tcqto\n");
			fprintf(fasm, "\tidivq %%%s\n", regStk[top - 1]);
			fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);
			top--;
		}
	}
	| multiplicative_expr PERCENT primary_expr {
		fprintf(fasm, "\n\t# %%\n");
		if (top < nregStk) {
			fprintf(fasm, "\tmovq %%%s, %%rax\n", regStk[top - 2]);
			fprintf(fasm, "\tcqto\n");
			fprintf(fasm, "\tidivq %%%s\n", regStk[top - 1]);
			fprintf(fasm, "\tmovq %%rdx, %%%s\n", regStk[top - 2]);
			top--;
		}
	}
	;

primary_expr:
	STRING_CONST {
		string_table[nstrings] = $<string_val>1;
		if (top < nregStk) {
			fprintf(fasm, "\tmovq $string%d, %%%s\n", nstrings, regStk[top]);
			top++;
		}
		else {
			fprintf(stdout, "Register overflow\n");
		}
		nstrings++;
	}
	| call
	| WORD {		
		int pos = -1;
		char *id = $1;
		for (int i = 0; i < nlocals; i++) {
			if (strcmp(local_vars_table[i], id) == 0) {
				pos = i;
				break;
			}
		}

		if (pos == -1) {
			fprintf(fasm, "\tmovq %s, %%%s\n", id, regStk[top]);
		}
		else {
			fprintf(fasm, "\tmovq -%d(%%rbp), %%%s\n", 8 * (pos + 1), regStk[top]);
		}
		top++;			
	}
	| WORD LBRACE expression RBRACE {
		if (ischar($1)) {
			int pos = -1;
			char *variable = $1;
			for (int i = 0; i < nlocals; i++) {
				if (strcmp(local_vars_table[i], variable) == 0) {
					pos = i;
					break;
				}
			}

			if (pos == -1) {
				fprintf(fasm, "\taddq %s, %%%s\n", $1, regStk[top - 1]);
			}
			else {
				fprintf(fasm, "\taddq -%d(%%rbp), %%%s\n", 8 * (pos + 1), regStk[top - 1]);
			}
			fprintf(fasm, "\tmovq $0, %%%s\n", regStk[top]);
			fprintf(fasm, "\tmovb (%%%s), %%%s\n", regStk[top - 1], regByte[top]);
			fprintf(fasm, "\tmovq %%%s, %%%s\n", regStk[top], regStk[top - 1]);
		}
		else {
			int pos = -1;
			char *variable = $1;
			for (int i = 0; i < nlocals; i++) {
				if (strcmp(local_vars_table[i], variable) == 0) {
					pos = i;
					break;
				}
			}

			if (pos == -1) {
				fprintf(fasm, "\timulq $8, %%%s\n", regStk[top - 1]);
				fprintf(fasm, "\taddq %s, %%%s\n", $1, regStk[top - 1]);
				fprintf(fasm, "\tmovq (%%%s), %%%s\n", regStk[top - 1], regStk[top - 1]);
			}
			else {
				fprintf(fasm, "\timulq $8, %%%s\n", regStk[top - 1]);
				fprintf(fasm, "\taddq -%d(%%rbp), %%%s\n", 8 * (pos + 1), regStk[top - 1]);
				fprintf(fasm, "\tmovq (%%%s), %%%s\n", regStk[top - 1], regStk[top - 1]);
			}
		}
	}
	| AMPERSAND WORD {
		int pos = -1;
		char *variable = $2;
		for (int i = 0; i < nlocals; i++) {
			if (strcmp(local_vars_table[i], variable) == 0) {
				pos = i;
				break;
			}
		}

		if (pos == -1) {
			fprintf(fasm, "\tmovq $%s, %%%s\n", $2, regStk[top]);
		}
		else {
			fprintf(fasm, "\tmovq %%rbp, %%%s\n", regStk[top]);
			fprintf(fasm, "\tsubq $%d, %%%s\n", 8 * (pos + 1), regStk[top]);
		}
		top++;
	}
	| INTEGER_CONST {
		fprintf(fasm, "\n\t# push %s\n", $<string_val>1);
		if (top < nregStk) {
			fprintf(fasm, "\tmovq $%s, %%%s\n", $<string_val>1, regStk[top]);
			top++;
		}
		else {
			fprintf(stderr, "Line %d: register overflow\n", line_number);
			exit(1);
		}
	}
	| LPARENT expression RPARENT
	;

compound_statement:
	LCURLY statement_list RCURLY
	;

statement_list:
	statement_list statement
	| /*empty*/
	;

local_var:
	var_type local_var_list SEMICOLON;

local_var_list:
	WORD {
		local_vars_table[nlocals] = $1;
		

		if (var_id == 1) {
			string_variable_table[string_variable_count] = $1;
			string_variable_count++;
		}

		nlocals++;
	}
	| local_var_list COMA WORD {
		local_vars_table[nlocals] = $3;
		nlocals++;
	}
	;

statement:
	assignment SEMICOLON
	| call SEMICOLON {
		top = 0;
	}
	| local_var
	| compound_statement

	| IF LPARENT {
		$<my_nlabel>1 = nlabelif;
		nlabelif++;
	}
	expression RPARENT {
		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tje else_%d\n", $<my_nlabel>1);
		top--;
	}
	statement {
		fprintf(fasm, "\tjmp if_end_%d\n", $<my_nlabel>1);
		fprintf(fasm, "\nelse_%d:\n", $<my_nlabel>1);
	}
	else_optional {
		fprintf(fasm, "\nif_end_%d:\n", $<my_nlabel>1);
	}

	| WHILE LPARENT {
		$<my_nlabel>1 = nlabelwhile;
		nlabelwhile++;
		currentwhilecount++;
		currentloop = 0;
		fprintf(fasm, "\nwhile_start_%d:\n", $<my_nlabel>1);
	}
	expression RPARENT {
		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tje while_end_%d\n", $<my_nlabel>1);
		top--;
	}
	statement {
		currentloop = 0;
		fprintf(fasm, "\tjmp while_start_%d\n", $<my_nlabel>1);
		fprintf(fasm, "\nwhile_end_%d:\n", $<my_nlabel>1);
	}

	| DO {
		$<my_nlabel>1 = nlabeldowhile;
		nlabeldowhile++;
		currentdowhilecount++;
		currentloop = 1;
		fprintf(fasm, "\ndo_%d:\n", $<my_nlabel>1);
	}
	statement WHILE LPARENT expression {
		currentloop = 1;
		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tje do_while_end_%d\n", $<my_nlabel>1);
		fprintf(fasm, "\tjmp do_%d\n", $<my_nlabel>1);
		top--;
	}
	RPARENT SEMICOLON {
		fprintf(fasm, "\ndo_while_end_%d:\n", $<my_nlabel>1);
	}

	| FOR LPARENT assignment {
		$<my_nlabel>1 = nlabelfor;
		nlabelfor++;
		currentforcount++;
		currentloop = 2;
		fprintf(fasm, "\nfor_condition_%d:\n", $<my_nlabel>1);
	}
	SEMICOLON expression SEMICOLON {
		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tje for_end_%d\n", $<my_nlabel>1);
		fprintf(fasm, "\tjmp for_statement_%d\n", $<my_nlabel>1);
		fprintf(fasm, "\nfor_increment_%d:\n", $<my_nlabel>1);
		top--;
	}
	assignment RPARENT {
		fprintf(fasm, "\tjmp for_condition_%d\n", $<my_nlabel>1);
		fprintf(fasm, "\nfor_statement_%d:\n", $<my_nlabel>1);
	}
	statement {
		currentloop = 2;
		fprintf(fasm, "\tjmp for_increment_%d\n", $<my_nlabel>1);
		fprintf(fasm, "\nfor_end_%d:\n", $<my_nlabel>1);
	}

	| jump_statement
	;

else_optional:
	ELSE statement
	| /* empty */
	;

jump_statement:
	CONTINUE SEMICOLON {
		if (currentloop == 0) {
			fprintf(fasm, "\tjmp while_start_%d\n", currentwhilecount);
		}
		else if (currentloop == 1) {
			fprintf(fasm, "\tjmp do_%d\n", currentdowhilecount);
		}
		else if (currentloop == 2) {
			fprintf(fasm, "\tjmp for_increment_%d\n", currentforcount);
		}
	}
	| BREAK SEMICOLON {
		if (currentloop == 0) {
			fprintf(fasm, "\tjmp while_end_%d\n", currentwhilecount);
			currentwhilecount--;
		}
		else if (currentloop == 1) {
			fprintf(fasm, "\tjmp do_while_end_%d\n", currentdowhilecount);
			currentdowhilecount--;
		}
		else if (currentloop == 2) {
			fprintf(fasm, "\t\tjmp for_end_%d\n", currentforcount);
			currentforcount--;
		}
	}
	| RETURN expression SEMICOLON {
		fprintf(fasm, "\tmovq %%%s, %%rax\n", regStk[top - 1]);
		top = 0;

		fprintf(fasm, "\n\t# Restore registers\n");
		fprintf(fasm, "\tpopq %%r9\n");
		fprintf(fasm, "\tpopq %%r11\n");
		fprintf(fasm, "\tpopq %%r15\n");
		fprintf(fasm, "\tpopq %%r14\n");
		fprintf(fasm, "\tpopq %%r13\n");
		fprintf(fasm, "\tpopq %%r10\n");
		fprintf(fasm, "\tpopq %%rbx\n");
		fprintf(fasm, "\tpopq %%rbx\n");

		fprintf(fasm, "\taddq $%d, %%rsp\n", MAX_LOCALS_SPACE);

		fprintf(fasm, "\n\tleave\n");
		fprintf(fasm, "\tret\n\n");
	}
	;

%%

void yyset_in (FILE *  in_str );

int
yyerror(const char * s)
{
	fprintf(stderr,"%s:%d: %s\n", input_file, line_number, s);
}


int
main(int argc, char **argv)
{
	for (int i = 0; i < MAX_GLOBALS + MAX_LOCALS; i++) {
		string_variable_table[i] = "";
	}

	printf("-------------WARNING: You need to implement global and local vars ------\n");
	printf("------------- or you may get problems with top------\n");
	
	// Make sure there are enough arguments
	if (argc <2) {
		fprintf(stderr, "Usage: simple file\n");
		exit(1);
	}

	// Get file name
	input_file = strdup(argv[1]);

	int len = strlen(input_file);
	if (len < 2 || input_file[len-2]!='.' || input_file[len-1]!='c') {
		fprintf(stderr, "Error: file extension is not .c\n");
		exit(1);
	}

	// Get assembly file name
	asm_file = strdup(input_file);
	asm_file[len-1]='s';

	// Open file to compile
	FILE * f = fopen(input_file, "r");
	if (f==NULL) {
		fprintf(stderr, "Cannot open file %s\n", input_file);
		perror("fopen");
		exit(1);
	}

	// Create assembly file
	fasm = fopen(asm_file, "w");
	if (fasm==NULL) {
		fprintf(stderr, "Cannot open file %s\n", asm_file);
		perror("fopen");
		exit(1);
	}

	// Uncomment for debugging
	//fasm = stderr;

	// Create compilation file
	// 
	yyset_in(f);
	yyparse();

	// Generate string table
	int i;
	for (i = 0; i<nstrings; i++) {
		fprintf(fasm, "string%d:\n", i);
		fprintf(fasm, "\t.string %s\n\n", string_table[i]);
	}

	fclose(f);
	fclose(fasm);

	return 0;
}
