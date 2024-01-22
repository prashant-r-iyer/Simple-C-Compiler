	.data
	.comm g, 8
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
	movq %rbx, -8(%rbp)
	movq $string1, %rbx

	# push 1
	movq $1, %r10
	addq -8(%rbp), %r10
	movq $0, %r13
	movb (%r10), %r13b
	movq %r13, %r10
	# func=printf nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	movq $string2, %rbx
	movq %rbx, g
	movq $string3, %rbx

	# push 2
	movq $2, %r10
	addq g, %r10
	movq $0, %r13
	movb (%r10), %r13b
	movq %r13, %r10
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
	.string "abcd"

string1:
	.string "h[1]=%c\n"

string2:
	.string "efg"

string3:
	.string "g[3]=%c\n"

