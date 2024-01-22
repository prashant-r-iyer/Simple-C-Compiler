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

	# push 20
	movq $20, %rbx
	# func=malloc nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	call malloc
	movq %rax, %rbx
	movq %rbx, -8(%rbp)

	# push 0
	movq $0, %rbx

	# push 65
	movq $65, %r10
	addq -8(%rbp), %rbx
	movq $0, %r13
	movb %r10b, %r13b
	movq %r13, (%rbx)

	# push 1
	movq $1, %rbx

	# push 66
	movq $66, %r10
	addq -8(%rbp), %rbx
	movq $0, %r13
	movb %r10b, %r13b
	movq %r13, (%rbx)

	# push 2
	movq $2, %rbx

	# push 67
	movq $67, %r10
	addq -8(%rbp), %rbx
	movq $0, %r13
	movb %r10b, %r13b
	movq %r13, (%rbx)

	# push 3
	movq $3, %rbx

	# push 0
	movq $0, %r10
	addq -8(%rbp), %rbx
	movq $0, %r13
	movb %r10b, %r13b
	movq %r13, (%rbx)
	movq $string0, %rbx
	movq -8(%rbp), %r10
	# func=printf nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx

	# push 20
	movq $20, %rbx
	# func=malloc nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	call malloc
	movq %rax, %rbx
	movq %rbx, g

	# push 0
	movq $0, %rbx

	# push 68
	movq $68, %r10
	addq g, %rbx
	movq $0, %r13
	movb %r10b, %r13b
	movq %r13, (%rbx)

	# push 1
	movq $1, %rbx

	# push 69
	movq $69, %r10
	addq g, %rbx
	movq $0, %r13
	movb %r10b, %r13b
	movq %r13, (%rbx)

	# push 2
	movq $2, %rbx

	# push 70
	movq $70, %r10
	addq g, %rbx
	movq $0, %r13
	movb %r10b, %r13b
	movq %r13, (%rbx)

	# push 3
	movq $3, %rbx

	# push 0
	movq $0, %r10
	addq g, %rbx
	movq $0, %r13
	movb %r10b, %r13b
	movq %r13, (%rbx)
	movq $string1, %rbx
	movq g, %r10
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
	.string "h=%s\n"

string1:
	.string "g=%s\n"

