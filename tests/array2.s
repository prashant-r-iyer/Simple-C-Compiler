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

	# push 20
	movq $20, %r10

	# *
	imulq %r10, %rbx
	# func=malloc nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	call malloc
	movq %rax, %rbx
	movq %rbx, -8(%rbp)

	# push 0
	movq $0, %rbx
	movq %rbx, -16(%rbp)

for_condition_1:
	movq -16(%rbp), %rbx

	# push 20
	movq $20, %r10
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

	# push 3
	movq $3, %r10
	movq -16(%rbp), %r13

	# *
	imulq %r13, %r10
	imulq $8, %rbx
	addq -8(%rbp), %rbx
	movq %r10, (%rbx)
	jmp for_increment_1

for_end_1:
	movq $string0, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx

	# push 0
	movq $0, %rbx
	movq %rbx, -16(%rbp)

for_condition_2:
	movq -16(%rbp), %rbx

	# push 20
	movq $20, %r10
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
	movq -16(%rbp), %r13
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
	jmp for_increment_2

for_end_2:

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
	.string "Ok so far\n"

string1:
	.string "%d: %d\n"

