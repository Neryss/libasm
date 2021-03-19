global	_ft_strlen
_ft_strlen:
	push	rcx
	mov		rcx, 0
loop:
	cmp		[rdi + rcx], byte 0
	jz		end
	inc		rcx
	jmp		loop				;weird incrementing shit because why not
end:
	mov		rax, rcx			;move the counter to the return register
	pop		rcx					;pop the counter
	ret