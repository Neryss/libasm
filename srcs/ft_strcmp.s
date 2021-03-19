global	_ft_strcmp

_ft_strcmp:
loop:
	cmp		[rdi], byte 0	;check null byte
	je		end
	mov		dl, byte [rsi]	;move the char to a buf
	cmp		byte [rdi], dl	;compare char with buf char
	jne		end
	inc		rdi
	inc		rsi
	jmp		loop			;loop
end:
	movzx	rax, byte [rdi]	;mov the letter to rax and fill with zeroes
	movzx	rdx, byte [rsi]	;mov the letter to a buf and fill with zeroes
	sub		rax, rdx		;return the diff between each letters
	ret