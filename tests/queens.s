	.data
	.comm queens, 8
	.data
	.comm solid, 8
	.text

.globl abs
abs:
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
	movq -8(%rbp), %rbx

	# push 0
	movq $0, %r10
	movq $0, %rax
	cmpq %r10, %rbx
	setl %al
	movq %rax, %rbx
	cmpq $0, %rbx
	je else_1

	# push -1
	movq $-1, %rbx
	movq -8(%rbp), %r10

	# *
	imulq %r10, %rbx
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
	movq -8(%rbp), %rbx
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

.globl check
check:
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

	# push 0
	movq $0, %rbx
	movq %rbx, -16(%rbp)

for_condition_1:
	movq -16(%rbp), %rbx
	movq -8(%rbp), %r10
	movq $0, %rax
	cmpq %r10, %rbx
	setl %al
	movq %rax, %rbx
	cmpq $0, %rbx
	je for_end_1
	jmp for_statement_1

for_increment_1:
	movq -16(%rbp), %rbx

	# push 1
	movq $1, %r10

	# +
	addq %r10, %rbx
	movq %rbx, -16(%rbp)
	jmp for_condition_1

for_statement_1:
	movq -16(%rbp), %rbx
	imulq $8, %rbx
	addq queens, %rbx
	movq (%rbx), %rbx
	movq -8(%rbp), %r10
	imulq $8, %r10
	addq queens, %r10
	movq (%r10), %r10
	movq $0, %rax
	cmpq %r10, %rbx
	sete %al
	movq %rax, %rbx
or_start_0:
	movq $1, %rax
	cmpq $0, %rbx
	jne or_end_0
	movq -16(%rbp), %r10
	imulq $8, %r10
	addq queens, %r10
	movq (%r10), %r10
	movq -8(%rbp), %r13
	imulq $8, %r13
	addq queens, %r13
	movq (%r13), %r13

	# -
	subq %r13, %r10
	# func=abs nargs=1

	# Move values from reg stack to reg args
	movq %r10, %rdi
	call abs
	movq %rax, %r10
	movq -8(%rbp), %r13
	movq -16(%rbp), %r14

	# -
	subq %r14, %r13
	movq $0, %rax
	cmpq %r13, %r10
	sete %al
	movq %rax, %r10
	cmpq $0, %r10
	jne or_end_0
	movq $0, %rax
or_end_0:
	movq %rax, %rbx
	cmpq $0, %rbx
	je else_2

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

	jmp if_end_2

else_2:

if_end_2:
	jmp for_increment_1

for_end_1:

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

.globl bruteforce
bruteforce:
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
	movq -8(%rbp), %rbx

	# push 8
	movq $8, %r10
	movq $0, %rax
	cmpq %r10, %rbx
	sete %al
	movq %rax, %rbx
	cmpq $0, %rbx
	je else_3
	movq $string0, %rbx
	movq solid, %r10
	# func=printf nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	movq solid, %rbx

	# push 1
	movq $1, %r10

	# +
	addq %r10, %rbx
	movq %rbx, solid

	# push 0
	movq $0, %rbx
	movq %rbx, -16(%rbp)

for_condition_2:
	movq -16(%rbp), %rbx

	# push 8
	movq $8, %r10
	movq $0, %rax
	cmpq %r10, %rbx
	setl %al
	movq %rax, %rbx
	cmpq $0, %rbx
	je for_end_2
	jmp for_statement_2

for_increment_2:
	movq -16(%rbp), %rbx

	# push 1
	movq $1, %r10

	# +
	addq %r10, %rbx
	movq %rbx, -16(%rbp)
	jmp for_condition_2

for_statement_2:
	movq $string1, %rbx
	movq -16(%rbp), %r10
	imulq $8, %r10
	addq queens, %r10
	movq (%r10), %r10

	# push 1
	movq $1, %r13

	# +
	addq %r13, %r10
	# func=printf nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	jmp for_increment_2

for_end_2:
	movq $string2, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx

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

	jmp if_end_3

else_3:

if_end_3:

	# push 0
	movq $0, %rbx
	movq %rbx, -16(%rbp)

for_condition_3:
	movq -16(%rbp), %rbx

	# push 8
	movq $8, %r10
	movq $0, %rax
	cmpq %r10, %rbx
	setl %al
	movq %rax, %rbx
	cmpq $0, %rbx
	je for_end_3
	jmp for_statement_3

for_increment_3:
	movq -16(%rbp), %rbx

	# push 1
	movq $1, %r10

	# +
	addq %r10, %rbx
	movq %rbx, -16(%rbp)
	jmp for_condition_3

for_statement_3:
	movq -8(%rbp), %rbx
	movq -16(%rbp), %r10
	imulq $8, %rbx
	addq queens, %rbx
	movq %r10, (%rbx)
	movq -8(%rbp), %rbx
	# func=check nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	call check
	movq %rax, %rbx

	# push 0
	movq $0, %r10
	movq $0, %rax
	cmpq %r10, %rbx
	setne %al
	movq %rax, %rbx
	cmpq $0, %rbx
	je else_4
	movq -8(%rbp), %rbx

	# push 1
	movq $1, %r10

	# +
	addq %r10, %rbx
	# func=bruteforce nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	call bruteforce
	movq %rax, %rbx
	jmp if_end_4

else_4:

if_end_4:
	jmp for_increment_3

for_end_3:

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

	# push 8
	movq $8, %rbx

	# push 8
	movq $8, %r10

	# *
	imulq %r10, %rbx
	# func=malloc nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	call malloc
	movq %rax, %rbx
	movq %rbx, queens

	# push 1
	movq $1, %rbx
	movq %rbx, solid

	# push 0
	movq $0, %rbx
	# func=bruteforce nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	call bruteforce
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
	.string "Solution #%2ld = [ "

string1:
	.string "%ld "

string2:
	.string "]\n"

