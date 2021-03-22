global	_ft_strdup
extern	_ft_strlen
extern	_ft_strcpy
extern	_malloc
extern ___error
_ft_strdup:
	push	rdi
	call	_ft_strlen
	mov		rdi, rax
	add		rdi, 1
	call	_malloc
	cmp		rax, byte 0
	je		return
	pop		rsi
	mov		rdi, rax
	call	_ft_strcpy
	ret
return:
	mov		rax, 0
	ret