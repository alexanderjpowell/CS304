	.section	__TEXT,__text,regular,pure_instructions
	.globl	_shift
	.align	4, 0x90
_shift:                                 ## @shift
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
	cmpl	$1, %esi
	je	LBB0_3
## BB#1:                                ## %.lr.ph
	decl	%esi
	addq	$4, %rdi
	.align	4, 0x90
LBB0_2:                                 ## =>This Inner Loop Header: Depth=1
	movl	(%rdi), %eax
	movl	%eax, -4(%rdi)
	addq	$4, %rdi
	decl	%esi
	jne	LBB0_2
LBB0_3:                                 ## %._crit_edge
	popq	%rbp
	ret
	.cfi_endproc


.subsections_via_symbols
