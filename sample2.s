	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
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
	movq	_b5@GOTPCREL(%rip), %rax
	movq	_b4@GOTPCREL(%rip), %rcx
	movq	_b3@GOTPCREL(%rip), %rdx
	movq	_b2@GOTPCREL(%rip), %rsi
	movq	_b1@GOTPCREL(%rip), %rdi
	movl	$1, -4(%rbp)
	movl	$2, -8(%rbp)
	movl	$3, -12(%rbp)
	movl	$4, -16(%rbp)
	movl	$5, -20(%rbp)
	movl	$6, -24(%rbp)
	movl	$7, -28(%rbp)
	movl	$8, -32(%rbp)
	movl	$9, -36(%rbp)
	movl	$10, -40(%rbp)
	movl	-4(%rbp), %r8d
	movl	%r8d, _a1(%rip)
	movl	-8(%rbp), %r8d
	movl	%r8d, _a2(%rip)
	movl	-12(%rbp), %r8d
	movl	%r8d, _a3(%rip)
	movl	-16(%rbp), %r8d
	movl	%r8d, _a4(%rip)
	movl	-20(%rbp), %r8d
	movl	%r8d, _a5(%rip)
	movl	-24(%rbp), %r8d
	movl	%r8d, (%rdi)
	movl	-28(%rbp), %r8d
	movl	%r8d, (%rsi)
	movl	-32(%rbp), %r8d
	movl	%r8d, (%rdx)
	movl	-36(%rbp), %r8d
	movl	%r8d, (%rcx)
	movl	-40(%rbp), %r8d
	movl	%r8d, (%rax)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__DATA,__data
	.globl	_a1                     ## @a1
	.p2align	2
_a1:
	.long	1                       ## 0x1

	.globl	_a2                     ## @a2
	.p2align	2
_a2:
	.long	2                       ## 0x2

	.globl	_a3                     ## @a3
	.p2align	2
_a3:
	.long	3                       ## 0x3

	.globl	_a4                     ## @a4
	.p2align	2
_a4:
	.long	4                       ## 0x4

	.globl	_a5                     ## @a5
	.p2align	2
_a5:
	.long	5                       ## 0x5

	.comm	_b1,4,2                 ## @b1
	.comm	_b2,4,2                 ## @b2
	.comm	_b3,4,2                 ## @b3
	.comm	_b4,4,2                 ## @b4
	.comm	_b5,4,2                 ## @b5

.subsections_via_symbols
