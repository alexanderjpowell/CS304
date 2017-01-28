	.section	__TEXT,__text,regular,pure_instructions
	.globl	_choice2
	.align	4, 0x90
_choice2:                               ## @choice2
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp2:
	.cfi_def_cfa_offset 16
Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp4:
	.cfi_def_cfa_register %rbp
	shrl	$31, %edi
	movl	%edi, %eax
	popq	%rbp
	ret
	.cfi_endproc


.subsections_via_symbols
