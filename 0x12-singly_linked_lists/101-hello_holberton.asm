
	hello: db 'Hello, Holberton',0Ah,0
	global main
	extern printf

main:
	mov edi, hello
	xor eax,eax
	call printf
	mov eax,0;
	ret;
