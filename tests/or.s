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

	# push 0
	movq $0, %r10
or_start_0:
	movq $1, %rax
	cmpq $0, %r10
	jne or_end_0

	# push 0
	movq $0, %r13
	cmpq $0, %r13
	jne or_end_0
	movq $0, %rax
or_end_0:
	movq %rax, %r10
	# func=printf nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	movq $string1, %rbx

	# push 0
	movq $0, %r10
or_start_1:
	movq $1, %rax
	cmpq $0, %r10
	jne or_end_1

	# push 1
	movq $1, %r13
	cmpq $0, %r13
	jne or_end_1
	movq $0, %rax
or_end_1:
	movq %rax, %r10
	# func=printf nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	movq $string2, %rbx

	# push 1
	movq $1, %r10
or_start_2:
	movq $1, %rax
	cmpq $0, %r10
	jne or_end_2

	# push 0
	movq $0, %r13
	cmpq $0, %r13
	jne or_end_2
	movq $0, %rax
or_end_2:
	movq %rax, %r10
	# func=printf nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	movq $string3, %rbx

	# push 1
	movq $1, %r10
or_start_3:
	movq $1, %rax
	cmpq $0, %r10
	jne or_end_3

	# push 1
	movq $1, %r13
	cmpq $0, %r13
	jne or_end_3
	movq $0, %rax
or_end_3:
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
	.string "0 || 0 = %d\n"

string1:
	.string "0 || 1 = %d\n"

string2:
	.string "1 || 0 = %d\n"

string3:
	.string "1 || 1 = %d\n"

