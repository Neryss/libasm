extern	___error
global	_ft_write
_ft_write:
	mov		rax, 0x2000004
	syscall
	jc		error
	ret
error:
	mov		rdi, rax
	push	rdi
	call	___error	;push rax into rdi, push it so ___error can do its things
	pop		rdi
	mov		[rax], rdi	;move rdi to rax¿¿¿
	mov		rax, -1
	ret