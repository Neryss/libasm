global	_ft_strlen
_ft_strlen:
	push	rcx
	xor		rcx, rcx
loop:
	cmp		[rdi], byte 0
	jz		end
	inc		rcx
	inc		rdi
	jmp		loop
end:
	mov		rax, rcx
	pop		rcx
	ret