global	_ft_strcmp

_ft_strcmp:
loop:
	cmp		[rdi], byte 0
	je		end
	mov		dl, byte [rsi]
	cmp		byte [rdi], dl
	jne		end
	inc		rdi
	inc		rsi
	jmp		loop
end:
	movzx	rax, byte [rdi]
	movzx	rdx, byte [rsi]
	sub		rax, rdx
	ret