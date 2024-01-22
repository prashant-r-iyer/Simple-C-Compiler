	.text

.globl mystrlen
mystrlen:
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

	# push 0
	movq $0, %rbx
	movq %rbx, -16(%rbp)

while_start_1:
	movq -16(%rbp), %rbx
	addq -8(%rbp), %rbx
	movq $0, %r10
	movb (%rbx), %r10b
	movq %r10, %rbx
	cmpq $0, %rbx
	je while_end_1
	movq -16(%rbp), %rbx

	# push 1
	movq $1, %r10

	# +
	addq %r10, %rbx
	movq %rbx, -16(%rbp)
	jmp while_start_1

while_end_1:
	movq -16(%rbp), %rbx
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

.globl mystrcpy
mystrcpy:
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

while_start_2:

	# push 0
	movq $0, %rbx
	addq -16(%rbp), %rbx
	movq $0, %r10
	movb (%rbx), %r10b
	movq %r10, %rbx
	cmpq $0, %rbx
	je while_end_2

	# push 0
	movq $0, %rbx

	# push 0
	movq $0, %r10
	addq -16(%rbp), %r10
	movq $0, %r13
	movb (%r10), %r13b
	movq %r13, %r10
	addq -8(%rbp), %rbx
	movq $0, %r13
	movb %r10b, %r13b
	movq %r13, (%rbx)
	movq -8(%rbp), %rbx

	# push 1
	movq $1, %r10

	# +
	addq %r10, %rbx
	movq %rbx, -8(%rbp)
	movq -16(%rbp), %rbx

	# push 1
	movq $1, %r10

	# +
	addq %r10, %rbx
	movq %rbx, -16(%rbp)
	jmp while_start_2

while_end_2:

	# push 0
	movq $0, %rbx

	# push 0
	movq $0, %r10
	addq -8(%rbp), %rbx
	movq $0, %r13
	movb %r10b, %r13b
	movq %r13, (%rbx)

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

	# push 30
	movq $30, %rbx
	# func=malloc nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	call malloc
	movq %rax, %rbx
	movq %rbx, -8(%rbp)
	movq -8(%rbp), %rbx
	movq $string0, %r10
	# func=mystrcpy nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	call mystrcpy
	movq %rax, %rbx
	movq $string1, %rbx
	movq -8(%rbp), %r10
	# func=printf nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	movq $string2, %rbx
	movq -8(%rbp), %r10
	# func=mystrlen nargs=1

	# Move values from reg stack to reg args
	movq %r10, %rdi
	call mystrlen
	movq %rax, %r10
	# func=printf nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx

	# push 30
	movq $30, %rbx
	# func=malloc nargs=1

	# Move values from reg stack to reg args
	movq %rbx, %rdi
	call malloc
	movq %rax, %rbx
	movq %rbx, g
	movq g, %rbx
	movq $string3, %r10
	# func=strcpy nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	call strcpy
	movq %rax, %rbx
	movq $string4, %rbx
	movq g, %r10
	# func=printf nargs=2

	# Move values from reg stack to reg args
	movq %r10, %rsi
	movq %rbx, %rdi
	movl $0, %eax
	call printf
	movq %rax, %rbx
	movq $string5, %rbx
	movq g, %r10
	# func=mystrlen nargs=1

	# Move values from reg stack to reg args
	movq %r10, %rdi
	call mystrlen
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
	.string "Hello world"

string1:
	.string "h=%s\n"

string2:
	.string "l=%d\n"

string3:
	.string "This is a great course"

string4:
	.string "g=%s\n"

string5:
	.string "l=%d\n"

