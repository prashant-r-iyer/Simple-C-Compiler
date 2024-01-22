	.text

.globl printArray
printArray:
	# Save Frame pointer
	pushq %rbp
	movq %rsp, %rbp
	subq $256, %rsp
	pushq %rbx
	pushq %rbx
	pushq %r10
	pushq %r13
	pushq %r14
	pushq %r15
	pushq %r11
	pushq %r9
	movq %rdi, -8(%rbp)
	movq %rsi, -16(%rbp)
	movq %rdx, -24(%rbp)
	movq -16(%rbp), %rbx
	movq %rbx, -32(%rbp)

for_condition_1:
	movq -32(%rbp), %rbx
	movq -24(%rbp), %r10
	movq $0, %rax
	cmpq %r10, %rbx
	setle %al
	movq %rax, %rbx
	cmpq $0, %rbx
	je for_end_1
	jmp for_statement_1

for_increment_1:
	movq -32(%rbp), %rbx

	# push 1
	movq $1, %r10

	# +
	addq %r10, %rbx
	movq %rbx, -32(%rbp)
	jmp for_condition_1

for_statement_1:
	movq $string0, %rbx
	movq -32(%rbp), %r10
	movq -32(%rbp), %r13
	imulq $8, %r13
	addq -8(%rbp), %r13
	movq (%r13), %r13
	# func=printf nargs=3

	# Move values from reg stack to reg args
	movq %r13, %rdx
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	jmp for_increment_1

for_end_1:

	# Restore registers
	popq %r9
	popq %r11
	popq %r15
	popq %r14
	popq %r13
	popq %r10
	popq %rbx
	popq %rbx
	addq $256, %rsp

	leave
	ret

	.text

.globl print
print:
	# Save Frame pointer
	pushq %rbp
	movq %rsp, %rbp
	subq $256, %rsp
	pushq %rbx
	pushq %rbx
	pushq %r10
	pushq %r13
	pushq %r14
	pushq %r15
	pushq %r11
	pushq %r9
	movq %rdi, -8(%rbp)
	movq $string1, %rbx
	movq -8(%rbp), %r10
	# func=printf nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx

	# Restore registers
	popq %r9
	popq %r11
	popq %r15
	popq %r14
	popq %r13
	popq %r10
	popq %rbx
	popq %rbx
	addq $256, %rsp

	leave
	ret

	.text

.globl mystrcmp
mystrcmp:
	# Save Frame pointer
	pushq %rbp
	movq %rsp, %rbp
	subq $256, %rsp
	pushq %rbx
	pushq %rbx
	pushq %r10
	pushq %r13
	pushq %r14
	pushq %r15
	pushq %r11
	pushq %r9
	movq %rdi, -8(%rbp)
	movq %rsi, -16(%rbp)

while_start_1:

	# push 0
	movq $0, %rbx
	addq -8(%rbp), %rbx
	movq $0, %r10
	movb (%rbx), %r10b
	movq %r10, %rbx
and_start_0:
	movq $0, %rax
	cmpq $0, %rbx
	je and_end_0

	# push 0
	movq $0, %r10
	addq -16(%rbp), %r10
	movq $0, %r13
	movb (%r10), %r13b
	movq %r13, %r10
	cmpq $0, %r10
	je and_end_0
	movq $1, %rax
and_end_0:
	movq %rax, %rbx
and_start_1:
	movq $0, %rax
	cmpq $0, %rbx
	je and_end_1

	# push 0
	movq $0, %r10
	addq -8(%rbp), %r10
	movq $0, %r13
	movb (%r10), %r13b
	movq %r13, %r10

	# push 0
	movq $0, %r13
	addq -16(%rbp), %r13
	movq $0, %r14
	movb (%r13), %r14b
	movq %r14, %r13
	movq $0, %rax
	cmpq %r13, %r10
	sete %al
	movq %rax, %r10
	cmpq $0, %r10
	je and_end_1
	movq $1, %rax
and_end_1:
	movq %rax, %rbx
	cmpq $0, %rbx
	je while_end_1
	movq -8(%rbp), %rbx

	# push 1
	movq $1, %r10

	# +
	addq %r10, %rbx
	movq %rbx, -8(%rbp)
	movq -16(%rbp), %rbx

	# push 1
	movq $1, %r10

	# +
	addq %r10, %rbx
	movq %rbx, -16(%rbp)
	jmp while_start_1

while_end_1:

	# push 0
	movq $0, %rbx
	addq -8(%rbp), %rbx
	movq $0, %r10
	movb (%rbx), %r10b
	movq %r10, %rbx

	# push 0
	movq $0, %r10
	movq $0, %rax
	cmpq %r10, %rbx
	sete %al
	movq %rax, %rbx
and_start_2:
	movq $0, %rax
	cmpq $0, %rbx
	je and_end_2

	# push 0
	movq $0, %r10
	addq -16(%rbp), %r10
	movq $0, %r13
	movb (%r10), %r13b
	movq %r13, %r10

	# push 0
	movq $0, %r13
	movq $0, %rax
	cmpq %r13, %r10
	sete %al
	movq %rax, %r10
	cmpq $0, %r10
	je and_end_2
	movq $1, %rax
and_end_2:
	movq %rax, %rbx
	cmpq $0, %rbx
	je else_1

	# push 0
	movq $0, %rbx
	movq %rbx, %rax

	# Restore registers
	popq %r9
	popq %r11
	popq %r15
	popq %r14
	popq %r13
	popq %r10
	popq %rbx
	popq %rbx
	addq $256, %rsp

	leave
	ret

	jmp if_end_1

else_1:

if_end_1:

	# push 0
	movq $0, %rbx
	addq -8(%rbp), %rbx
	movq $0, %r10
	movb (%rbx), %r10b
	movq %r10, %rbx

	# push 0
	movq $0, %r10
	movq $0, %rax
	cmpq %r10, %rbx
	sete %al
	movq %rax, %rbx
and_start_3:
	movq $0, %rax
	cmpq $0, %rbx
	je and_end_3

	# push 0
	movq $0, %r10
	addq -16(%rbp), %r10
	movq $0, %r13
	movb (%r10), %r13b
	movq %r13, %r10

	# push 0
	movq $0, %r13
	movq $0, %rax
	cmpq %r13, %r10
	setne %al
	movq %rax, %r10
	cmpq $0, %r10
	je and_end_3
	movq $1, %rax
and_end_3:
	movq %rax, %rbx
	cmpq $0, %rbx
	je else_2

	# push -1
	movq $-1, %rbx
	movq %rbx, %rax

	# Restore registers
	popq %r9
	popq %r11
	popq %r15
	popq %r14
	popq %r13
	popq %r10
	popq %rbx
	popq %rbx
	addq $256, %rsp

	leave
	ret

	jmp if_end_2

else_2:

if_end_2:

	# push 0
	movq $0, %rbx
	addq -8(%rbp), %rbx
	movq $0, %r10
	movb (%rbx), %r10b
	movq %r10, %rbx

	# push 0
	movq $0, %r10
	movq $0, %rax
	cmpq %r10, %rbx
	setne %al
	movq %rax, %rbx
and_start_4:
	movq $0, %rax
	cmpq $0, %rbx
	je and_end_4

	# push 0
	movq $0, %r10
	addq -16(%rbp), %r10
	movq $0, %r13
	movb (%r10), %r13b
	movq %r13, %r10

	# push 0
	movq $0, %r13
	movq $0, %rax
	cmpq %r13, %r10
	sete %al
	movq %rax, %r10
	cmpq $0, %r10
	je and_end_4
	movq $1, %rax
and_end_4:
	movq %rax, %rbx
	cmpq $0, %rbx
	je else_3

	# push 1
	movq $1, %rbx
	movq %rbx, %rax

	# Restore registers
	popq %r9
	popq %r11
	popq %r15
	popq %r14
	popq %r13
	popq %r10
	popq %rbx
	popq %rbx
	addq $256, %rsp

	leave
	ret

	jmp if_end_3

else_3:

if_end_3:

	# push 0
	movq $0, %rbx
	addq -8(%rbp), %rbx
	movq $0, %r10
	movb (%rbx), %r10b
	movq %r10, %rbx

	# push 0
	movq $0, %r10
	addq -16(%rbp), %r10
	movq $0, %r13
	movb (%r10), %r13b
	movq %r13, %r10
	movq $0, %rax
	cmpq %r10, %rbx
	setg %al
	movq %rax, %rbx
	cmpq $0, %rbx
	je else_4

	# push 1
	movq $1, %rbx
	movq %rbx, %rax

	# Restore registers
	popq %r9
	popq %r11
	popq %r15
	popq %r14
	popq %r13
	popq %r10
	popq %rbx
	popq %rbx
	addq $256, %rsp

	leave
	ret

	jmp if_end_4

else_4:

if_end_4:

	# push -1
	movq $-1, %rbx
	movq %rbx, %rax

	# Restore registers
	popq %r9
	popq %r11
	popq %r15
	popq %r14
	popq %r13
	popq %r10
	popq %rbx
	popq %rbx
	addq $256, %rsp

	leave
	ret


	# Restore registers
	popq %r9
	popq %r11
	popq %r15
	popq %r14
	popq %r13
	popq %r10
	popq %rbx
	popq %rbx
	addq $256, %rsp

	leave
	ret

	.text

.globl quicksortsubrange
quicksortsubrange:
	# Save Frame pointer
	pushq %rbp
	movq %rsp, %rbp
	subq $256, %rsp
	pushq %rbx
	pushq %rbx
	pushq %r10
	pushq %r13
	pushq %r14
	pushq %r15
	pushq %r11
	pushq %r9
	movq %rdi, -8(%rbp)
	movq %rsi, -16(%rbp)
	movq %rdx, -24(%rbp)
	movq -16(%rbp), %rbx
	movq -24(%rbp), %r10
	movq $0, %rax
	cmpq %r10, %rbx
	setge %al
	movq %rax, %rbx
	cmpq $0, %rbx
	je else_5

	# push 0
	movq $0, %rbx
	movq %rbx, %rax

	# Restore registers
	popq %r9
	popq %r11
	popq %r15
	popq %r14
	popq %r13
	popq %r10
	popq %rbx
	popq %rbx
	addq $256, %rsp

	leave
	ret

	jmp if_end_5

else_5:

if_end_5:
	movq -24(%rbp), %rbx
	imulq $8, %rbx
	addq -8(%rbp), %rbx
	movq (%rbx), %rbx
	movq %rbx, -32(%rbp)
	movq -16(%rbp), %rbx
	movq %rbx, -40(%rbp)
	movq -24(%rbp), %rbx

	# push 1
	movq $1, %r10

	# -
	subq %r10, %rbx
	movq %rbx, -48(%rbp)

while_start_2:
	movq -40(%rbp), %rbx
	movq -48(%rbp), %r10
	movq $0, %rax
	cmpq %r10, %rbx
	setl %al
	movq %rax, %rbx
	cmpq $0, %rbx
	je while_end_2

while_start_3:
	movq -40(%rbp), %rbx
	movq -48(%rbp), %r10
	movq $0, %rax
	cmpq %r10, %rbx
	setl %al
	movq %rax, %rbx
and_start_5:
	movq $0, %rax
	cmpq $0, %rbx
	je and_end_5
	movq -40(%rbp), %r10
	imulq $8, %r10
	addq -8(%rbp), %r10
	movq (%r10), %r10
	movq -32(%rbp), %r13
	# func=mystrcmp nargs=2

	# Move values from reg stack to reg args
	movq %r13, %rsi
	movq %r10, %rdi
	call mystrcmp
	movq %rax, %r10

	# push 0
	movq $0, %r13
	movq $0, %rax
	cmpq %r13, %r10
	setl %al
	movq %rax, %r10
	cmpq $0, %r10
	je and_end_5
	movq $1, %rax
and_end_5:
	movq %rax, %rbx
	cmpq $0, %rbx
	je while_end_3
	movq -40(%rbp), %rbx

	# push 1
	movq $1, %r10

	# +
	addq %r10, %rbx
	movq %rbx, -40(%rbp)
	jmp while_start_3

while_end_3:

while_start_4:
	movq -40(%rbp), %rbx
	movq -48(%rbp), %r10
	movq $0, %rax
	cmpq %r10, %rbx
	setl %al
	movq %rax, %rbx
and_start_6:
	movq $0, %rax
	cmpq $0, %rbx
	je and_end_6
	movq -48(%rbp), %r10
	imulq $8, %r10
	addq -8(%rbp), %r10
	movq (%r10), %r10
	movq -32(%rbp), %r13
	# func=mystrcmp nargs=2

	# Move values from reg stack to reg args
	movq %r13, %rsi
	movq %r10, %rdi
	call mystrcmp
	movq %rax, %r10

	# push 0
	movq $0, %r13
	movq $0, %rax
	cmpq %r13, %r10
	setge %al
	movq %rax, %r10
	cmpq $0, %r10
	je and_end_6
	movq $1, %rax
and_end_6:
	movq %rax, %rbx
	cmpq $0, %rbx
	je while_end_4
	movq -48(%rbp), %rbx

	# push 1
	movq $1, %r10

	# -
	subq %r10, %rbx
	movq %rbx, -48(%rbp)
	jmp while_start_4

while_end_4:
	movq -40(%rbp), %rbx
	movq -48(%rbp), %r10
	movq $0, %rax
	cmpq %r10, %rbx
	setl %al
	movq %rax, %rbx
	cmpq $0, %rbx
	je else_6
	movq -40(%rbp), %rbx
	imulq $8, %rbx
	addq -8(%rbp), %rbx
	movq (%rbx), %rbx
	movq %rbx, -56(%rbp)
	movq -40(%rbp), %rbx
	movq -48(%rbp), %r10
	imulq $8, %r10
	addq -8(%rbp), %r10
	movq (%r10), %r10
	imulq $8, %rbx
	addq -8(%rbp), %rbx
	movq %r10, (%rbx)
	movq -48(%rbp), %rbx
	movq -56(%rbp), %r10
	imulq $8, %rbx
	addq -8(%rbp), %rbx
	movq %r10, (%rbx)
	jmp if_end_6

else_6:

if_end_6:
	jmp while_start_2

while_end_2:
	movq -24(%rbp), %rbx
	movq -40(%rbp), %r10
	imulq $8, %r10
	addq -8(%rbp), %r10
	movq (%r10), %r10
	imulq $8, %rbx
	addq -8(%rbp), %rbx
	movq %r10, (%rbx)
	movq -40(%rbp), %rbx
	movq -32(%rbp), %r10
	imulq $8, %rbx
	addq -8(%rbp), %rbx
	movq %r10, (%rbx)
	movq -8(%rbp), %rbx
	movq -16(%rbp), %r10
	movq -40(%rbp), %r13

	# push 1
	movq $1, %r14

	# -
	subq %r14, %r13
	# func=quicksortsubrange nargs=3

	# Move values from reg stack to reg args
	movq %r13, %rdx
	movq %r10, %rsi
	movq %rbx, %rdi
	call quicksortsubrange
	movq %rax, %rbx
	movq -8(%rbp), %rbx
	movq -48(%rbp), %r10

	# push 1
	movq $1, %r13

	# +
	addq %r13, %r10
	movq -24(%rbp), %r13
	# func=quicksortsubrange nargs=3

	# Move values from reg stack to reg args
	movq %r13, %rdx
	movq %r10, %rsi
	movq %rbx, %rdi
	call quicksortsubrange
	movq %rax, %rbx

	# Restore registers
	popq %r9
	popq %r11
	popq %r15
	popq %r14
	popq %r13
	popq %r10
	popq %rbx
	popq %rbx
	addq $256, %rsp

	leave
	ret

	.text

.globl quicksort
quicksort:
	# Save Frame pointer
	pushq %rbp
	movq %rsp, %rbp
	subq $256, %rsp
	pushq %rbx
	pushq %rbx
	pushq %r10
	pushq %r13
	pushq %r14
	pushq %r15
	pushq %r11
	pushq %r9
	movq %rdi, -8(%rbp)
	movq %rsi, -16(%rbp)
	movq -8(%rbp), %rbx

	# push 0
	movq $0, %r10
	movq -16(%rbp), %r13

	# push 1
	movq $1, %r14

	# -
	subq %r14, %r13
	# func=quicksortsubrange nargs=3

	# Move values from reg stack to reg args
	movq %r13, %rdx
	movq %r10, %rsi
	movq %rbx, %rdi
	call quicksortsubrange
	movq %rax, %rbx

	# Restore registers
	popq %r9
	popq %r11
	popq %r15
	popq %r14
	popq %r13
	popq %r10
	popq %rbx
	popq %rbx
	addq $256, %rsp

	leave
	ret

	.text

.globl main
main:
	# Save Frame pointer
	pushq %rbp
	movq %rsp, %rbp
	subq $256, %rsp
	pushq %rbx
	pushq %rbx
	pushq %r10
	pushq %r13
	pushq %r14
	pushq %r15
	pushq %r11
	pushq %r9

	# push 6
	movq $6, %rbx
	movq %rbx, -8(%rbp)
	movq -8(%rbp), %rbx

	# push 8
	movq $8, %r10

	# *
	imulq %r10, %rbx
	# func=malloc nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	call malloc
	movq %rax, %rbx
	movq %rbx, -16(%rbp)

	# push 0
	movq $0, %rbx
	movq $string2, %r10
	imulq $8, %rbx
	addq -16(%rbp), %rbx
	movq %r10, (%rbx)

	# push 1
	movq $1, %rbx
	movq $string3, %r10
	imulq $8, %rbx
	addq -16(%rbp), %rbx
	movq %r10, (%rbx)

	# push 2
	movq $2, %rbx
	movq $string4, %r10
	imulq $8, %rbx
	addq -16(%rbp), %rbx
	movq %r10, (%rbx)

	# push 3
	movq $3, %rbx
	movq $string5, %r10
	imulq $8, %rbx
	addq -16(%rbp), %rbx
	movq %r10, (%rbx)

	# push 4
	movq $4, %rbx
	movq $string6, %r10
	imulq $8, %rbx
	addq -16(%rbp), %rbx
	movq %r10, (%rbx)

	# push 5
	movq $5, %rbx
	movq $string7, %r10
	imulq $8, %rbx
	addq -16(%rbp), %rbx
	movq %r10, (%rbx)
	movq $string8, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	movq -16(%rbp), %rbx

	# push 0
	movq $0, %r10
	movq -8(%rbp), %r13

	# push 1
	movq $1, %r14

	# -
	subq %r14, %r13
	# func=printArray nargs=3

	# Move values from reg stack to reg args
	movq %r13, %rdx
	movq %r10, %rsi
	movq %rbx, %rdi
	call printArray
	movq %rax, %rbx
	movq -16(%rbp), %rbx
	movq -8(%rbp), %r10
	# func=quicksort nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	call quicksort
	movq %rax, %rbx
	movq $string9, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	movq -16(%rbp), %rbx

	# push 0
	movq $0, %r10
	movq -8(%rbp), %r13

	# push 1
	movq $1, %r14

	# -
	subq %r14, %r13
	# func=printArray nargs=3

	# Move values from reg stack to reg args
	movq %r13, %rdx
	movq %r10, %rsi
	movq %rbx, %rdi
	call printArray
	movq %rax, %rbx

	# Restore registers
	popq %r9
	popq %r11
	popq %r15
	popq %r14
	popq %r13
	popq %r10
	popq %rbx
	popq %rbx
	addq $256, %rsp

	leave
	ret

string0:
	.string "%d: %s\n"

string1:
	.string "==%s==\n"

string2:
	.string "Rachael"

string3:
	.string "Monica"

string4:
	.string "Phoebe"

string5:
	.string "Joey"

string6:
	.string "Ross"

string7:
	.string "Chandler"

string8:
	.string "-------- Before -------\n"

string9:
	.string "-------- After -------\n"

