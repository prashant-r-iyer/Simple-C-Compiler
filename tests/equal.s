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

	# push 9
	movq $9, %r10

	# push 8
	movq $8, %r13
	movq $0, %rax
	cmpq %r13, %r10
	sete %al
	movq %rax, %r10
	# func=printf nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	movq $string1, %rbx

	# push 9
	movq $9, %r10

	# push 9
	movq $9, %r13
	movq $0, %rax
	cmpq %r13, %r10
	sete %al
	movq %rax, %r10
	# func=printf nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	movq $string2, %rbx

	# push 9
	movq $9, %r10

	# push 8
	movq $8, %r13
	movq $0, %rax
	cmpq %r13, %r10
	setne %al
	movq %rax, %r10
	# func=printf nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	movq $string3, %rbx

	# push 9
	movq $9, %r10

	# push 9
	movq $9, %r13
	movq $0, %rax
	cmpq %r13, %r10
	setne %al
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
	.string "9==8%d\n"

string1:
	.string "9==9=%d\n"

string2:
	.string "9!=8%d\n"

string3:
	.string "9!=9=%d\n"

