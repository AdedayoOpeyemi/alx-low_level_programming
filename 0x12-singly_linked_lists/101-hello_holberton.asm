section .data
	hello_msg db 'Hello, Holberton',0  ; Null-terminated string for "Hello, Holberton"

section .text
	global hello_holberton_asm

extern printf

hello_holberton_asm:
	; Call printf using C calling conventions (64-bit)
	mov rdi, hello_msg  ; The first argument: pointer to the format string
	call printf         ; Call the printf function

	; Clean up the stack (printf uses the XMM registers)
	add rsp, 8

	; Return from the function
	ret

section .text
	global main

main:
	; Call our assembly function
	call hello_holberton_asm

	; Exit the program (using the exit system call)
	mov eax, 60         ; System call number for exit (64-bit)
	xor edi, edi        ; Exit status 0
	syscall             ; Call the kernel

	; We don't actually reach this point, but it's required for assembly to compile correctly
	ret
