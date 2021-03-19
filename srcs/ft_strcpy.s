global	_ft_strcpy

_ft_strcpy:
	mov	rax, rdi			;mov dest pointer to ret
loop:
	cmp		[rsi], byte 0
	je		end
	mov		dl, [rsi]		;store current char to a buf
	mov		[rdi], dl		;move the char from buf to dest
	inc		rsi
	inc		rdi
	jmp		loop
end:
	mov		[rdi], byte 0
	ret