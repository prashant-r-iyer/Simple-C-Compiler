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

	# push 3
	movq $3, %r10

	# push 4
	movq $4, %r13

	# *
	imulq %r13, %r10

	# push 2
	movq $2, %r13

	# /
	movq %r10, %rax
	cqto
	idivq %r13
	movq %rax, %r10

	# push 9
	movq $9, %r13

	# +
	addq %r13, %r10

	# push 7
	movq $7, %r13

	# -
	subq %r13, %r10

	# push 9
	movq $9, %r13

	# %
	movq %r10, %rax
	cqto
	idivq %r13
	movq %rdx, %r10
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
	.string "((3*4)/2+9-7)%9=%d\n"

