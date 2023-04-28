
	hello db 'Hello, Holberton',0Ah;
	global main

main:
	;
	mov rax, 4;
	mov rbx, 1;
	mov rcx, hello;
	mov rdx, 17;
	int 0x80;

	;
	mov eax,1;
	xor ebx,ebx;
	int 0x80;
