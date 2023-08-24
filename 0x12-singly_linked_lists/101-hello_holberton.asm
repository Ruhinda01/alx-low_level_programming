section .data
	hello db "Hello, Holberton", 0x0A, 0

section .text
	global main

	extern printf

main:
	push rbp
	mov rdi, hello
	call printf
	pop rbp


	xor rdi, rdi
	mov rax, 60
	syscall
