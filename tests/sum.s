	.text

.globl sum
sum:
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

	# push 0
	movq $0, %rbx
	movq %rbx, -32(%rbp)

	# push 0
	movq $0, %rbx
	movq %rbx, -24(%rbp)

for_condition_1:
	movq -24(%rbp), %rbx
	movq -8(%rbp), %r10
	movq $0, %rax
	cmpq %r10, %rbx
	setl %al
	movq %rax, %rbx
	cmpq $0, %rbx
	je for_end_1
	jmp for_statement_1

for_increment_1:
	movq -24(%rbp), %rbx

	# push 1
	movq $1, %r10

	# +
	addq %r10, %rbx
	movq %rbx, -24(%rbp)
	jmp for_condition_1

for_statement_1:
	movq -32(%rbp), %rbx
	movq -24(%rbp), %r10
	imulq $8, %r10
	addq -16(%rbp), %r10
	movq (%r10), %r10

	# +
	addq %r10, %rbx
	movq %rbx, -32(%rbp)
	jmp for_increment_1

for_end_1:
	movq -32(%rbp), %rbx
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

	# push 5
	movq $5, %rbx

	# push 8
	movq $8, %r10

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

	# push 4
	movq $4, %r10
	imulq $8, %rbx
	addq -8(%rbp), %rbx
	movq %r10, (%rbx)

	# push 1
	movq $1, %rbx

	# push 3
	movq $3, %r10
	imulq $8, %rbx
	addq -8(%rbp), %rbx
	movq %r10, (%rbx)

	# push 2
	movq $2, %rbx

	# push 1
	movq $1, %r10
	imulq $8, %rbx
	addq -8(%rbp), %rbx
	movq %r10, (%rbx)

	# push 3
	movq $3, %rbx

	# push 7
	movq $7, %r10
	imulq $8, %rbx
	addq -8(%rbp), %rbx
	movq %r10, (%rbx)

	# push 4
	movq $4, %rbx

	# push 6
	movq $6, %r10
	imulq $8, %rbx
	addq -8(%rbp), %rbx
	movq %r10, (%rbx)

	# push 5
	movq $5, %rbx
	movq -8(%rbp), %r10
	# func=sum nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	call sum
	movq %rax, %rbx
	movq %rbx, -16(%rbp)
	movq $string0, %rbx
	movq -16(%rbp), %r10
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

string0:
	.string "sum=%d\n"

