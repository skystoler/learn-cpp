	.file	"test_objdump.c"
	.text
	.globl	rfact
	.type	rfact, @function
rfact:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	cmpq	$1, -24(%rbp)
	jg	.L2
	movq	$1, -8(%rbp)
	jmp	.L3
.L2:
	movq	-24(%rbp), %rax
	subq	$1, %rax
	movq	%rax, %rdi
	call	rfact
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	imulq	%rdx, %rax
	movq	%rax, -8(%rbp)
.L3:
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	rfact, .-rfact
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$5, %edi
	call	rfact
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
