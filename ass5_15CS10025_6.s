	.file	"simple.c"
	.text
	.globl	addMatrix
	.type	addMatrix, @function
addMatrix:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-24(%rbp), %rdx
	movsd	(%rdx), %xmm1
	movq	-32(%rbp), %rdx
	movsd	(%rdx), %xmm0
	addsd	%xmm1, %xmm0
	movsd	%xmm0, (%rax)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	addMatrix, .-addMatrix
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movsd	.LC0(%rip), %xmm0
	movsd	%xmm0, -80(%rbp)
	movsd	.LC1(%rip), %xmm0
	movsd	%xmm0, -72(%rbp)
	movsd	.LC2(%rip), %xmm0
	movsd	%xmm0, -64(%rbp)
	movsd	.LC3(%rip), %xmm0
	movsd	%xmm0, -56(%rbp)
	movsd	.LC1(%rip), %xmm0
	movsd	%xmm0, -48(%rbp)
	movsd	.LC2(%rip), %xmm0
	movsd	%xmm0, -40(%rbp)
	movsd	.LC3(%rip), %xmm0
	movsd	%xmm0, -32(%rbp)
	movsd	.LC4(%rip), %xmm0
	movsd	%xmm0, -24(%rbp)
	leaq	-48(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	addMatrix
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rax
	movq	(%rax), %rax
	movsd	(%rax), %xmm0
	cvtsd2ss	%xmm0, %xmm0
	call	printd
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L5
	call	__stack_chk_fail
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	0
	.long	1072693248
	.align 8
.LC1:
	.long	0
	.long	1073741824
	.align 8
.LC2:
	.long	0
	.long	1074266112
	.align 8
.LC3:
	.long	0
	.long	1074790400
	.align 8
.LC4:
	.long	0
	.long	1075052544
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.5) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
