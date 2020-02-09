	.file	"Q1.c"
	.text
	.globl	count
	.bss
	.align 4
	.type	count, @object
	.size	count, 4
count:
	.zero	4
	.text
	.globl	BinarySearchString
	.type	BinarySearchString, @function
BinarySearchString:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, -36(%rbp)
	movl	%ecx, -40(%rbp)
	movl	-36(%rbp), %eax
	cmpl	-40(%rbp), %eax
	jg	.L2
	movl	-40(%rbp), %eax
	subl	-36(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %edx
	movl	-36(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	jne	.L3
	movl	count(%rip), %eax
	addl	$1, %eax
	movl	%eax, count(%rip)
.L3:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	jl	.L4
	movl	-4(%rbp), %eax
	leal	-1(%rax), %ecx
	movl	-36(%rbp), %edx
	movq	-32(%rbp), %rsi
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	BinarySearchString
.L4:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movq	-32(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	jg	.L2
	movl	-4(%rbp), %eax
	leal	1(%rax), %edi
	movl	-40(%rbp), %edx
	movq	-32(%rbp), %rsi
	movq	-24(%rbp), %rax
	movl	%edx, %ecx
	movl	%edi, %edx
	movq	%rax, %rdi
	call	BinarySearchString
.L2:
	movl	count(%rip), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	BinarySearchString, .-BinarySearchString
	.section	.rodata
	.align 8
.LC0:
	.string	" The number of times %c occured in the given string %d times"
	.text
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
	subq	$80, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movabsq	$7233734700695708001, %rax
	movabsq	$7378697625172010084, %rdx
	movq	%rax, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movabsq	$8825499982421850232, %rax
	movabsq	$8825501086245354106, %rdx
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movabsq	$8825501086245354106, %rax
	movq	%rax, -32(%rbp)
	movb	$0, -24(%rbp)
	movb	$100, -69(%rbp)
	leaq	-69(%rbp), %rsi
	leaq	-64(%rbp), %rax
	movl	$41, %ecx
	movl	$0, %edx
	movq	%rax, %rdi
	call	BinarySearchString
	movl	%eax, -68(%rbp)
	movzbl	-69(%rbp), %eax
	movsbl	%al, %eax
	movl	-68(%rbp), %edx
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L8
	call	__stack_chk_fail@PLT
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
