global	_ft_strcpy

_ft_strcpy:
	mov	rax, rdi
loop:
	cmp		[rsi], byte 0
	je		end
	mov		dl, [rsi]
	mov		[rdi], dl
	inc		rdi
	inc		rsi
end:
	ret