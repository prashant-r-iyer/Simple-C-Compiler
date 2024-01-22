	.text

.globl f1
f1:
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
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx

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

.globl f2
f2:
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
	movq $string1, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx

	# push 0
	movq $0, %rbx
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
	# func=f1 nargs=0

	# Move values from reg stack to reg args
	call f1
	movq %rax, %rbx
or_start_0:
	movq $1, %rax
	cmpq $0, %rbx
	jne or_end_0
	# func=f2 nargs=0

	# Move values from reg stack to reg args
	call f2
	movq %rax, %r10
	cmpq $0, %r10
	jne or_end_0
	movq $0, %rax
or_end_0:
	movq %rax, %rbx
	cmpq $0, %rbx
	je else_1
	movq $string2, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	jmp if_end_1

else_1:
	movq $string3, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx

if_end_1:
	# func=f2 nargs=0

	# Move values from reg stack to reg args
	call f2
	movq %rax, %rbx
and_start_0:
	movq $0, %rax
	cmpq $0, %rbx
	je and_end_0
	# func=f1 nargs=0

	# Move values from reg stack to reg args
	call f1
	movq %rax, %r10
	cmpq $0, %r10
	je and_end_0
	movq $1, %rax
and_end_0:
	movq %rax, %rbx
	cmpq $0, %rbx
	je else_2
	movq $string4, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	jmp if_end_2

else_2:
	movq $string5, %rbx
	# func=printf nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx

if_end_2:
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
	.string "First function\n"

string1:
	.string "Second function\n"

string2:
	.string "Or passed\n"

string3:
	.string "Or failed\n"

string4:
	.string "And passed\n"

string5:
	.string "And failed\n"

string6:
	.string "End\n"

