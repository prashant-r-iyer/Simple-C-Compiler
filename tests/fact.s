	.text

.globl fact
fact:
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
	sete %al
	movq %rax, %rbx
	cmpq $0, %rbx
	je else_1

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

	jmp if_end_1

else_1:

if_end_1:
	movq -8(%rbp), %rbx
	movq -8(%rbp), %r10

	# push 1
	movq $1, %r13

	# -
	subq %r13, %r10
	# func=fact nargs=1

	# Move values from reg stack to reg args
	movq %r10, %rdi
	call fact
	movq %rax, %r10

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
	movq $string0, %rbx

	# push 5
	movq $5, %r10
	# func=fact nargs=1

	# Move values from reg stack to reg args
	movq %r10, %rdi
	call fact
	movq %rax, %r10
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
	.string " Factorial of 5 = %d\n"

