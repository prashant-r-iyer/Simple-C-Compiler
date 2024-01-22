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

	# push 1
	movq $1, %rbx
	cmpq $0, %rbx
	je else_1
	movq $string0, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	jmp if_end_1

else_1:

if_end_1:

	# push 0
	movq $0, %rbx
	cmpq $0, %rbx
	je else_2
	movq $string1, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	jmp if_end_2

else_2:

if_end_2:

	# push 1
	movq $1, %rbx
	cmpq $0, %rbx
	je else_3
	movq $string2, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	jmp if_end_3

else_3:
	movq $string3, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx

if_end_3:

	# push 0
	movq $0, %rbx
	cmpq $0, %rbx
	je else_4
	movq $string4, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	jmp if_end_4

else_4:
	movq $string5, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx

if_end_4:
	movq $string6, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
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
	.string "OK1\n"

string1:
	.string "OK2\n"

string2:
	.string "OK3\n"

string3:
	.string "OK4\n"

string4:
	.string "OK5\n"

string5:
	.string "OK6\n"

string6:
	.string "OK7\n"

