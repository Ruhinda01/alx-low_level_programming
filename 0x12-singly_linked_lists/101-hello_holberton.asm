section .data
	hello db "Hello, Holberton", 0x0A, 0

section .text
	global main

	extern printf

main:
	sub rsp, 8
	mov rdi, hello
	call printf
	add rsp, 8


	xor rdi, rdi
	mov rax, 60
	syscall
