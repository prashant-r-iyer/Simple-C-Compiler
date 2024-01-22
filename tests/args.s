	.text

.globl compute
compute:
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
	movq $string0, %rbx
	movq -8(%rbp), %r10
	movq -16(%rbp), %r13
	# func=printf nargs=3

	# Move values from reg stack to reg args
	movq %r13, %rdx
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

	# push 7
	movq $7, %r10
	# func=compute nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	call compute
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
	.string "a=%d b=%d\n"

