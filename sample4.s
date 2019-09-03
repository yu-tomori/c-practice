	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.globl	_MySub1                 ## -- Begin function MySub1
	.p2align	4, 0x90
_MySub1:                                ## @MySub1
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_MySub2                 ## -- Begin function MySub2
	.p2align	4, 0x90
_MySub2:                                ## @MySub2
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_MySub3                 ## -- Begin function MySub3
	.p2align	4, 0x90
_MySub3:                                ## @MySub3
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_MyFunc                 ## -- Begin function MyFunc
	.p2align	4, 0x90
_MyFunc:                                ## @MyFunc
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$123, -4(%rbp)
	cmpl	$100, -4(%rbp)
	jle	LBB3_2
## %bb.1:
	callq	_MySub1
	jmp	LBB3_6
LBB3_2:
	cmpl	$50, -4(%rbp)
	jge	LBB3_4
## %bb.3:
	callq	_MySub2
	jmp	LBB3_5
LBB3_4:
	callq	_MySub3
LBB3_5:
	jmp	LBB3_6
LBB3_6:
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
