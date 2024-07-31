	.file	"a.cpp"
	.section .rdata,"dr"
__ZStL19piecewise_construct:
	.space 1
__ZStL13allocator_arg:
	.space 1
__ZStL6ignore:
	.space 1
.lcomm __ZStL8__ioinit,1,1
	.align 4
__ZN9__gnu_cxxL21__default_lock_policyE:
	.long	2
	.section	.text$_ZNSt14_Bit_referenceC1EPmm,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt14_Bit_referenceC1EPmm
	.def	__ZNSt14_Bit_referenceC1EPmm;	.scl	2;	.type	32;	.endef
__ZNSt14_Bit_referenceC1EPmm:
LFB4528:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%eax)
	movl	-4(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE4528:
	.section	.text$_ZNSt14_Bit_referenceaSEb,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt14_Bit_referenceaSEb
	.def	__ZNSt14_Bit_referenceaSEb;	.scl	2;	.type	32;	.endef
__ZNSt14_Bit_referenceaSEb:
LFB4533:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	%ecx, -4(%ebp)
	movl	8(%ebp), %eax
	movb	%al, -8(%ebp)
	cmpb	$0, -8(%ebp)
	je	L3
	movl	-4(%ebp), %eax
	movl	(%eax), %eax
	movl	-4(%ebp), %edx
	movl	(%edx), %edx
	movl	(%edx), %ecx
	movl	-4(%ebp), %edx
	movl	4(%edx), %edx
	orl	%ecx, %edx
	movl	%edx, (%eax)
	jmp	L4
L3:
	movl	-4(%ebp), %eax
	movl	(%eax), %eax
	movl	-4(%ebp), %edx
	movl	(%edx), %edx
	movl	(%edx), %ecx
	movl	-4(%ebp), %edx
	movl	4(%edx), %edx
	notl	%edx
	andl	%ecx, %edx
	movl	%edx, (%eax)
L4:
	movl	-4(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE4533:
	.section	.text$_ZNSt8iteratorISt26random_access_iterator_tagbiPbRbEC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt8iteratorISt26random_access_iterator_tagbiPbRbEC2Ev
	.def	__ZNSt8iteratorISt26random_access_iterator_tagbiPbRbEC2Ev;	.scl	2;	.type	32;	.endef
__ZNSt8iteratorISt26random_access_iterator_tagbiPbRbEC2Ev:
LFB4543:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE4543:
	.section	.text$_ZNSt18_Bit_iterator_baseC2EPmj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt18_Bit_iterator_baseC2EPmj
	.def	__ZNSt18_Bit_iterator_baseC2EPmj;	.scl	2;	.type	32;	.endef
__ZNSt18_Bit_iterator_baseC2EPmj:
LFB4545:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt8iteratorISt26random_access_iterator_tagbiPbRbEC2Ev
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%eax)
	movl	-12(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE4545:
	.section	.text$_ZNSt18_Bit_iterator_base7_M_incrEi,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt18_Bit_iterator_base7_M_incrEi
	.def	__ZNSt18_Bit_iterator_base7_M_incrEi;	.scl	2;	.type	32;	.endef
__ZNSt18_Bit_iterator_base7_M_incrEi:
LFB4549:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$20, %esp
	movl	%ecx, -20(%ebp)
	movl	-20(%ebp), %eax
	movl	4(%eax), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%ebp)
	movl	-20(%ebp), %eax
	movl	(%eax), %edx
	movl	-4(%ebp), %eax
	movl	%eax, %ecx
	sarl	$31, %ecx
	andl	$31, %ecx
	addl	%ecx, %eax
	sarl	$5, %eax
	sall	$2, %eax
	addl	%eax, %edx
	movl	-20(%ebp), %eax
	movl	%edx, (%eax)
	movl	-4(%ebp), %eax
	cltd
	shrl	$27, %edx
	addl	%edx, %eax
	andl	$31, %eax
	subl	%edx, %eax
	movl	%eax, -4(%ebp)
	cmpl	$0, -4(%ebp)
	jns	L9
	addl	$32, -4(%ebp)
	movl	-20(%ebp), %eax
	movl	(%eax), %eax
	leal	-4(%eax), %edx
	movl	-20(%ebp), %eax
	movl	%edx, (%eax)
L9:
	movl	-4(%ebp), %edx
	movl	-20(%ebp), %eax
	movl	%edx, 4(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE4549:
	.section	.text$_ZNSt13_Bit_iteratorC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt13_Bit_iteratorC1Ev
	.def	__ZNSt13_Bit_iteratorC1Ev;	.scl	2;	.type	32;	.endef
__ZNSt13_Bit_iteratorC1Ev:
LFB4559:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	$0, 4(%esp)
	movl	$0, (%esp)
	movl	%eax, %ecx
	call	__ZNSt18_Bit_iterator_baseC2EPmj
	subl	$8, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE4559:
	.section	.text$_ZNSt13_Bit_iteratorC1EPmj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt13_Bit_iteratorC1EPmj
	.def	__ZNSt13_Bit_iteratorC1EPmj;	.scl	2;	.type	32;	.endef
__ZNSt13_Bit_iteratorC1EPmj:
LFB4562:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt18_Bit_iterator_baseC2EPmj
	subl	$8, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE4562:
	.section	.text$_ZNKSt13_Bit_iteratordeEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNKSt13_Bit_iteratordeEv
	.def	__ZNKSt13_Bit_iteratordeEv;	.scl	2;	.type	32;	.endef
__ZNKSt13_Bit_iteratordeEv:
LFB4564:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	4(%eax), %eax
	movl	$1, %edx
	movl	%eax, %ecx
	sall	%cl, %edx
	movl	%edx, %ecx
	movl	-28(%ebp), %eax
	movl	(%eax), %edx
	leal	-16(%ebp), %eax
	movl	%ecx, 4(%esp)
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt14_Bit_referenceC1EPmm
	subl	$8, %esp
	movl	-16(%ebp), %eax
	movl	-12(%ebp), %edx
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE4564:
	.section	.text$_ZNSt13_Bit_iteratorpLEi,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt13_Bit_iteratorpLEi
	.def	__ZNSt13_Bit_iteratorpLEi;	.scl	2;	.type	32;	.endef
__ZNSt13_Bit_iteratorpLEi:
LFB4569:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt18_Bit_iterator_base7_M_incrEi
	subl	$4, %esp
	movl	-12(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE4569:
	.section	.text$_ZNKSt13_Bit_iteratorplEi,"x"
	.linkonce discard
	.align 2
	.globl	__ZNKSt13_Bit_iteratorplEi
	.def	__ZNKSt13_Bit_iteratorplEi;	.scl	2;	.type	32;	.endef
__ZNKSt13_Bit_iteratorplEi:
LFB4571:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%eax, -16(%ebp)
	movl	%edx, -12(%ebp)
	leal	-16(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt13_Bit_iteratorpLEi
	subl	$4, %esp
	movl	4(%eax), %edx
	movl	(%eax), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE4571:
	.section .rdata,"dr"
__ZStL10defer_lock:
	.space 1
__ZStL11try_to_lock:
	.space 1
__ZStL10adopt_lock:
	.space 1
	.align 4
__ZNSt15regex_constantsL5icaseE:
	.long	1
	.align 4
__ZNSt15regex_constantsL6nosubsE:
	.long	2
	.align 4
__ZNSt15regex_constantsL8optimizeE:
	.long	4
	.align 4
__ZNSt15regex_constantsL7collateE:
	.long	8
	.align 4
__ZNSt15regex_constantsL10ECMAScriptE:
	.long	16
	.align 4
__ZNSt15regex_constantsL5basicE:
	.long	32
	.align 4
__ZNSt15regex_constantsL8extendedE:
	.long	64
	.align 4
__ZNSt15regex_constantsL3awkE:
	.long	128
	.align 4
__ZNSt15regex_constantsL4grepE:
	.long	256
	.align 4
__ZNSt15regex_constantsL5egrepE:
	.long	512
	.align 4
__ZNSt15regex_constantsL12__polynomialE:
	.long	1024
	.align 4
__ZNSt15regex_constantsL13match_defaultE:
	.space 4
	.align 4
__ZNSt15regex_constantsL13match_not_bolE:
	.long	1
	.align 4
__ZNSt15regex_constantsL13match_not_eolE:
	.long	2
	.align 4
__ZNSt15regex_constantsL13match_not_bowE:
	.long	4
	.align 4
__ZNSt15regex_constantsL13match_not_eowE:
	.long	8
	.align 4
__ZNSt15regex_constantsL9match_anyE:
	.long	16
	.align 4
__ZNSt15regex_constantsL14match_not_nullE:
	.long	32
	.align 4
__ZNSt15regex_constantsL16match_continuousE:
	.long	64
	.align 4
__ZNSt15regex_constantsL16match_prev_availE:
	.long	128
	.align 4
__ZNSt15regex_constantsL14format_defaultE:
	.space 4
	.align 4
__ZNSt15regex_constantsL10format_sedE:
	.long	256
	.align 4
__ZNSt15regex_constantsL14format_no_copyE:
	.long	512
	.align 4
__ZNSt15regex_constantsL17format_first_onlyE:
	.long	1024
	.align 4
__ZNSt15regex_constantsL13error_collateE:
	.space 4
	.align 4
__ZNSt15regex_constantsL11error_ctypeE:
	.long	1
	.align 4
__ZNSt15regex_constantsL12error_escapeE:
	.long	2
	.align 4
__ZNSt15regex_constantsL13error_backrefE:
	.long	3
	.align 4
__ZNSt15regex_constantsL11error_brackE:
	.long	4
	.align 4
__ZNSt15regex_constantsL11error_parenE:
	.long	5
	.align 4
__ZNSt15regex_constantsL11error_braceE:
	.long	6
	.align 4
__ZNSt15regex_constantsL14error_badbraceE:
	.long	7
	.align 4
__ZNSt15regex_constantsL11error_rangeE:
	.long	8
	.align 4
__ZNSt15regex_constantsL11error_spaceE:
	.long	9
	.align 4
__ZNSt15regex_constantsL15error_badrepeatE:
	.long	10
	.align 4
__ZNSt15regex_constantsL16error_complexityE:
	.long	11
	.align 4
__ZNSt15regex_constantsL11error_stackE:
	.long	12
	.align 4
__ZNSt8__detailL19_S_invalid_state_idE:
	.long	-1
	.text
	.globl	__Z9prefixSumRSt6vectorIxSaIxEES2_
	.def	__Z9prefixSumRSt6vectorIxSaIxEES2_;	.scl	2;	.type	32;	.endef
__Z9prefixSumRSt6vectorIxSaIxEES2_:
LFB7686:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$44, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	movl	16(%ebp), %eax
	movl	$0, (%esp)
	movl	%eax, %ecx
	call	__ZNSt6vectorIxSaIxEEixEj
	subl	$4, %esp
	movl	%eax, %ebx
	movl	12(%ebp), %eax
	movl	$0, (%esp)
	movl	%eax, %ecx
	call	__ZNSt6vectorIxSaIxEEixEj
	subl	$4, %esp
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%eax, (%ebx)
	movl	%edx, 4(%ebx)
	movl	12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNKSt6vectorIxSaIxEE4sizeEv
	movl	%eax, -32(%ebp)
	movl	$1, -28(%ebp)
L20:
	movl	-28(%ebp), %eax
	cmpl	-32(%ebp), %eax
	jge	L19
	movl	-28(%ebp), %edx
	movl	16(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt6vectorIxSaIxEEixEj
	subl	$4, %esp
	movl	%eax, %edi
	movl	-28(%ebp), %eax
	subl	$1, %eax
	movl	%eax, %edx
	movl	16(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt6vectorIxSaIxEEixEj
	subl	$4, %esp
	movl	(%eax), %ebx
	movl	4(%eax), %esi
	movl	-28(%ebp), %edx
	movl	12(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt6vectorIxSaIxEEixEj
	subl	$4, %esp
	movl	4(%eax), %edx
	movl	(%eax), %eax
	addl	%ebx, %eax
	adcl	%esi, %edx
	movl	%eax, (%edi)
	movl	%edx, 4(%edi)
	addl	$1, -28(%ebp)
	jmp	L20
L19:
	movl	16(%ebp), %eax
	movl	%eax, (%esp)
	movl	8(%ebp), %ecx
	call	__ZNSt6vectorIxSaIxEEC1ERKS1_
	subl	$4, %esp
	movl	8(%ebp), %eax
	leal	-12(%ebp), %esp
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7686:
	.def	__ZL6mycompSt4pairIxxES0_;	.scl	3;	.type	32;	.endef
__ZL6mycompSt4pairIxxES0_:
LFB7687:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$44, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	movl	8(%ebp), %ecx
	movl	%ecx, -32(%ebp)
	movl	12(%ebp), %ecx
	movl	%ecx, -28(%ebp)
	movl	16(%ebp), %ecx
	movl	%ecx, -24(%ebp)
	movl	20(%ebp), %ecx
	movl	%ecx, -20(%ebp)
	movl	24(%ebp), %ecx
	movl	%ecx, -48(%ebp)
	movl	28(%ebp), %ecx
	movl	%ecx, -44(%ebp)
	movl	32(%ebp), %ecx
	movl	%ecx, -40(%ebp)
	movl	36(%ebp), %ecx
	movl	%ecx, -36(%ebp)
	movl	-32(%ebp), %esi
	movl	-28(%ebp), %edi
	movl	-48(%ebp), %ecx
	movl	-44(%ebp), %ebx
	movl	%esi, %eax
	xorl	%ecx, %eax
	movl	%eax, -56(%ebp)
	movl	%edi, %eax
	xorl	%ebx, %eax
	movl	%eax, -52(%ebp)
	movl	-56(%ebp), %edx
	movl	-52(%ebp), %ecx
	movl	%edx, %eax
	orl	%ecx, %eax
	testl	%eax, %eax
	jne	L23
	movl	-24(%ebp), %ecx
	movl	-20(%ebp), %ebx
	movl	-40(%ebp), %eax
	movl	-36(%ebp), %edx
	movl	$1, %esi
	cmpl	%edx, %ebx
	jg	L26
	cmpl	%edx, %ebx
	jl	L25
	cmpl	%eax, %ecx
	ja	L26
L25:
	movl	$0, %esi
	jmp	L26
L23:
	movl	-32(%ebp), %ecx
	movl	-28(%ebp), %ebx
	movl	-48(%ebp), %eax
	movl	-44(%ebp), %edx
	movl	$1, %esi
	cmpl	%edx, %ebx
	jl	L26
	cmpl	%edx, %ebx
	jg	L28
	cmpl	%eax, %ecx
	jb	L26
L28:
	movl	$0, %esi
L26:
	movl	%esi, %eax
	addl	$44, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7687:
	.globl	__Z9FindPrimev
	.def	__Z9FindPrimev;	.scl	2;	.type	32;	.endef
__Z9FindPrimev:
LFB7688:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA7688
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$84, %esp
	.cfi_offset 3, -12
	leal	-42(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIbEC1Ev
	movb	$1, -41(%ebp)
	leal	-64(%ebp), %eax
	leal	-42(%ebp), %edx
	movl	%edx, 8(%esp)
	leal	-41(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	$3001, (%esp)
	movl	%eax, %ecx
LEHB0:
	call	__ZNSt6vectorIbSaIbEEC1EjRKbRKS0_
LEHE0:
	subl	$12, %esp
	leal	-42(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIbED1Ev
	leal	-64(%ebp), %eax
	movl	$0, (%esp)
	movl	%eax, %ecx
	call	__ZNSt6vectorIbSaIbEEixEj
	subl	$4, %esp
	movl	%eax, -40(%ebp)
	movl	%edx, -36(%ebp)
	leal	-40(%ebp), %eax
	movl	$0, (%esp)
	movl	%eax, %ecx
	call	__ZNSt14_Bit_referenceaSEb
	subl	$4, %esp
	leal	-64(%ebp), %eax
	movl	$1, (%esp)
	movl	%eax, %ecx
	call	__ZNSt6vectorIbSaIbEEixEj
	subl	$4, %esp
	movl	%eax, -32(%ebp)
	movl	%edx, -28(%ebp)
	leal	-32(%ebp), %eax
	movl	$0, (%esp)
	movl	%eax, %ecx
	call	__ZNSt14_Bit_referenceaSEb
	subl	$4, %esp
	movl	$2, -12(%ebp)
L33:
	movl	-12(%ebp), %eax
	imull	-12(%ebp), %eax
	cmpl	$3000, %eax
	jg	L30
	movl	-12(%ebp), %eax
	imull	-12(%ebp), %eax
	movl	%eax, -16(%ebp)
L32:
	cmpl	$3000, -16(%ebp)
	jg	L31
	movl	-16(%ebp), %edx
	leal	-64(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt6vectorIbSaIbEEixEj
	subl	$4, %esp
	movl	%eax, -24(%ebp)
	movl	%edx, -20(%ebp)
	leal	-24(%ebp), %eax
	movl	$0, (%esp)
	movl	%eax, %ecx
	call	__ZNSt14_Bit_referenceaSEb
	subl	$4, %esp
	movl	-12(%ebp), %eax
	addl	%eax, -16(%ebp)
	jmp	L32
L31:
	addl	$1, -12(%ebp)
	jmp	L33
L30:
	leal	-64(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt6vectorIbSaIbEED1Ev
	jmp	L36
L35:
	movl	%eax, %ebx
	leal	-42(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIbED1Ev
	movl	%ebx, %eax
	movl	%eax, (%esp)
LEHB1:
	call	__Unwind_Resume
LEHE1:
L36:
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7688:
	.def	___gxx_personality_v0;	.scl	2;	.type	32;	.endef
	.section	.gcc_except_table,"w"
LLSDA7688:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE7688-LLSDACSB7688
LLSDACSB7688:
	.uleb128 LEHB0-LFB7688
	.uleb128 LEHE0-LEHB0
	.uleb128 L35-LFB7688
	.uleb128 0
	.uleb128 LEHB1-LFB7688
	.uleb128 LEHE1-LEHB1
	.uleb128 0
	.uleb128 0
LLSDACSE7688:
	.text
	.globl	__Z10sumOfDigiti
	.def	__Z10sumOfDigiti;	.scl	2;	.type	32;	.endef
__Z10sumOfDigiti:
LFB7689:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	$0, -4(%ebp)
L39:
	cmpl	$0, 8(%ebp)
	je	L38
	movl	8(%ebp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	addl	%edx, -4(%ebp)
	movl	8(%ebp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, 8(%ebp)
	jmp	L39
L38:
	movl	-4(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7689:
	.globl	__Z5powerxx
	.def	__Z5powerxx;	.scl	2;	.type	32;	.endef
__Z5powerxx:
LFB7690:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$76, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	movl	8(%ebp), %eax
	movl	%eax, -48(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -44(%ebp)
	movl	16(%ebp), %eax
	movl	%eax, -56(%ebp)
	movl	20(%ebp), %eax
	movl	%eax, -52(%ebp)
	movl	-56(%ebp), %eax
	xorb	$0, %ah
	movl	%eax, %edx
	movl	-52(%ebp), %eax
	xorb	$0, %ah
	movl	%eax, %ecx
	movl	%ecx, %eax
	orl	%edx, %eax
	testl	%eax, %eax
	jne	L42
	movl	$1, %eax
	movl	$0, %edx
	jmp	L43
L42:
	movl	-56(%ebp), %eax
	movl	-52(%ebp), %edx
	movl	%edx, %ecx
	shrl	$31, %ecx
	movl	$0, %ebx
	addl	%ecx, %eax
	adcl	%ebx, %edx
	shrdl	$1, %edx, %eax
	sarl	%edx
	movl	%eax, 8(%esp)
	movl	%edx, 12(%esp)
	movl	-48(%ebp), %eax
	movl	-44(%ebp), %edx
	movl	%eax, (%esp)
	movl	%edx, 4(%esp)
	call	__Z5powerxx
	movl	%eax, -32(%ebp)
	movl	%edx, -28(%ebp)
	movl	-28(%ebp), %eax
	imull	-32(%ebp), %eax
	movl	%eax, %edx
	movl	-28(%ebp), %eax
	imull	-32(%ebp), %eax
	leal	(%edx,%eax), %ecx
	movl	-32(%ebp), %eax
	mull	-32(%ebp)
	addl	%edx, %ecx
	movl	%ecx, %edx
	movl	%eax, -32(%ebp)
	movl	%edx, -28(%ebp)
	movl	%eax, -32(%ebp)
	movl	%edx, -28(%ebp)
	movl	-56(%ebp), %eax
	andl	$1, %eax
	movl	%eax, -64(%ebp)
	movl	-52(%ebp), %eax
	andl	$0, %eax
	movl	%eax, -60(%ebp)
	movl	-64(%ebp), %eax
	movl	-60(%ebp), %edx
	movl	%eax, %ebx
	xorb	$0, %bh
	movl	%ebx, %esi
	movl	%edx, %eax
	xorb	$0, %ah
	movl	%eax, %edi
	movl	%edi, %eax
	orl	%esi, %eax
	testl	%eax, %eax
	je	L44
	movl	-28(%ebp), %eax
	imull	-48(%ebp), %eax
	movl	%eax, %edx
	movl	-44(%ebp), %eax
	imull	-32(%ebp), %eax
	leal	(%edx,%eax), %ecx
	movl	-48(%ebp), %eax
	mull	-32(%ebp)
	addl	%edx, %ecx
	movl	%ecx, %edx
	movl	%eax, -32(%ebp)
	movl	%edx, -28(%ebp)
	movl	%eax, -32(%ebp)
	movl	%edx, -28(%ebp)
L44:
	movl	-32(%ebp), %eax
	movl	-28(%ebp), %edx
L43:
	addl	$76, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7690:
	.globl	__Z3lcmii
	.def	__Z3lcmii;	.scl	2;	.type	32;	.endef
__Z3lcmii:
LFB7691:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$20, %esp
	.cfi_offset 3, -12
	movl	8(%ebp), %eax
	imull	12(%ebp), %eax
	movl	%eax, %ebx
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt5__gcdIiET_S0_S0_
	movl	%eax, %ecx
	movl	%ebx, %eax
	cltd
	idivl	%ecx
	addl	$20, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7691:
	.section	.text$_ZSt3minIxERKT_S2_S2_,"x"
	.linkonce discard
	.globl	__ZSt3minIxERKT_S2_S2_
	.def	__ZSt3minIxERKT_S2_S2_;	.scl	2;	.type	32;	.endef
__ZSt3minIxERKT_S2_S2_:
LFB7693:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	.cfi_offset 3, -12
	movl	12(%ebp), %eax
	movl	(%eax), %ecx
	movl	4(%eax), %ebx
	movl	8(%ebp), %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	cmpl	%edx, %ebx
	jg	L48
	cmpl	%edx, %ebx
	jl	L51
	cmpl	%eax, %ecx
	jnb	L48
L51:
	movl	12(%ebp), %eax
	jmp	L50
L48:
	movl	8(%ebp), %eax
L50:
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7693:
	.text
	.globl	__Z5solvev
	.def	__Z5solvev;	.scl	2;	.type	32;	.endef
__Z5solvev:
LFB7692:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%esi
	pushl	%ebx
	subl	$96, %esp
	.cfi_offset 6, -12
	.cfi_offset 3, -16
	leal	-48(%ebp), %eax
	movl	%eax, (%esp)
	movl	$__ZSt3cin, %ecx
	call	__ZNSirsERx
	subl	$4, %esp
	movl	%eax, %edx
	leal	-56(%ebp), %eax
	movl	%eax, (%esp)
	movl	%edx, %ecx
	call	__ZNSirsERx
	subl	$4, %esp
	movl	%eax, %edx
	leal	-64(%ebp), %eax
	movl	%eax, (%esp)
	movl	%edx, %ecx
	call	__ZNSirsERx
	subl	$4, %esp
	movl	-48(%ebp), %eax
	movl	-44(%ebp), %edx
	movl	%eax, -88(%ebp)
	movl	%edx, -84(%ebp)
	movl	-56(%ebp), %eax
	movl	-52(%ebp), %edx
	addl	-88(%ebp), %eax
	adcl	-84(%ebp), %edx
	movl	%eax, -88(%ebp)
	movl	%edx, -84(%ebp)
	movl	-64(%ebp), %eax
	movl	-60(%ebp), %edx
	addl	-88(%ebp), %eax
	adcl	-84(%ebp), %edx
	movl	%eax, %ecx
	andl	$1, %ecx
	movl	%ecx, -80(%ebp)
	movl	%edx, %eax
	andl	$0, %eax
	movl	%eax, -76(%ebp)
	movl	-80(%ebp), %eax
	movl	-76(%ebp), %edx
	movl	%eax, %ecx
	xorb	$0, %ch
	movl	%ecx, %ebx
	movl	%edx, %eax
	xorb	$0, %ah
	movl	%eax, %esi
	movl	%esi, %eax
	orl	%ebx, %eax
	testl	%eax, %eax
	je	L53
	movl	$-1, (%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEPFRSoS_E
	subl	$4, %esp
	jmp	L52
L53:
	movl	$0, -16(%ebp)
	movl	$0, -12(%ebp)
	movl	$0, -24(%ebp)
	movl	$0, -20(%ebp)
	movl	-48(%ebp), %ecx
	movl	-44(%ebp), %ebx
	movl	-56(%ebp), %eax
	movl	-52(%ebp), %edx
	addl	%ecx, %eax
	adcl	%ebx, %edx
	movl	%eax, -40(%ebp)
	movl	%edx, -36(%ebp)
	movl	-48(%ebp), %ecx
	movl	-44(%ebp), %ebx
	movl	-56(%ebp), %eax
	movl	-52(%ebp), %edx
	addl	%eax, %ecx
	adcl	%edx, %ebx
	movl	-64(%ebp), %eax
	movl	-60(%ebp), %edx
	addl	%ecx, %eax
	adcl	%ebx, %edx
	movl	%edx, %ecx
	shrl	$31, %ecx
	movl	$0, %ebx
	addl	%ecx, %eax
	adcl	%ebx, %edx
	shrdl	$1, %edx, %eax
	sarl	%edx
	movl	%eax, -32(%ebp)
	movl	%edx, -28(%ebp)
	leal	-40(%ebp), %eax
	movl	%eax, 4(%esp)
	leal	-32(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt3minIxERKT_S2_S2_
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%eax, -16(%ebp)
	movl	%edx, -12(%ebp)
	movl	-16(%ebp), %eax
	movl	-12(%ebp), %edx
	movl	%eax, (%esp)
	movl	%edx, 4(%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEx
	subl	$8, %esp
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEPFRSoS_E
	subl	$4, %esp
L52:
	leal	-8(%ebp), %esp
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7692:
	.def	___main;	.scl	2;	.type	32;	.endef
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB7694:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$36, %esp
	call	___main
	movl	$0, (%esp)
	call	__ZNSt8ios_base15sync_with_stdioEb
	movl	$0, (%esp)
	movl	$__ZSt3cin+8, %ecx
	call	__ZNSt9basic_iosIcSt11char_traitsIcEE3tieEPSo
	subl	$4, %esp
	movl	$0, (%esp)
	movl	$__ZSt4cout+4, %ecx
	call	__ZNSt9basic_iosIcSt11char_traitsIcEE3tieEPSo
	subl	$4, %esp
	movl	$1, -12(%ebp)
	leal	-12(%ebp), %eax
	movl	%eax, (%esp)
	movl	$__ZSt3cin, %ecx
	call	__ZNSirsERi
	subl	$4, %esp
L57:
	movl	-12(%ebp), %eax
	leal	-1(%eax), %edx
	movl	%edx, -12(%ebp)
	testl	%eax, %eax
	setne	%al
	testb	%al, %al
	je	L56
	call	__Z5solvev
	jmp	L57
L56:
	movl	$0, %eax
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7694:
	.section	.text$_ZSt4fillIPmiEvT_S1_RKT0_,"x"
	.linkonce discard
	.globl	__ZSt4fillIPmiEvT_S1_RKT0_
	.def	__ZSt4fillIPmiEvT_S1_RKT0_;	.scl	2;	.type	32;	.endef
__ZSt4fillIPmiEvT_S1_RKT0_:
LFB7925:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$20, %esp
	.cfi_offset 3, -12
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt12__niter_baseIPmET_S1_
	movl	%eax, %ebx
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt12__niter_baseIPmET_S1_
	movl	%eax, %edx
	movl	16(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	%ebx, 4(%esp)
	movl	%edx, (%esp)
	call	__ZSt8__fill_aIPmiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_
	nop
	addl	$20, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7925:
	.section	.text$_ZNSt6vectorIxSaIxEEixEj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt6vectorIxSaIxEEixEj
	.def	__ZNSt6vectorIxSaIxEEixEj;	.scl	2;	.type	32;	.endef
__ZNSt6vectorIxSaIxEEixEj:
LFB7963:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	(%eax), %eax
	movl	8(%ebp), %edx
	sall	$3, %edx
	addl	%edx, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE7963:
	.section	.text$_ZNKSt6vectorIxSaIxEE4sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNKSt6vectorIxSaIxEE4sizeEv
	.def	__ZNKSt6vectorIxSaIxEE4sizeEv;	.scl	2;	.type	32;	.endef
__ZNKSt6vectorIxSaIxEE4sizeEv:
LFB7964:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	4(%eax), %eax
	movl	%eax, %edx
	movl	-4(%ebp), %eax
	movl	(%eax), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$3, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7964:
	.section	.text$_ZNSt6vectorIxSaIxEEC1ERKS1_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt6vectorIxSaIxEEC1ERKS1_
	.def	__ZNSt6vectorIxSaIxEEC1ERKS1_;	.scl	2;	.type	32;	.endef
__ZNSt6vectorIxSaIxEEC1ERKS1_:
LFB7967:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA7967
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$60, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	movl	%ecx, -44(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNKSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv
	movl	%eax, %edx
	leal	-25(%ebp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
LEHB2:
	call	__ZN9__gnu_cxx14__alloc_traitsISaIxEE17_S_select_on_copyERKS1_
LEHE2:
	movl	8(%ebp), %ecx
	call	__ZNKSt6vectorIxSaIxEE4sizeEv
	movl	%eax, %ecx
	movl	-44(%ebp), %eax
	leal	-25(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%ecx, (%esp)
	movl	%eax, %ecx
LEHB3:
	call	__ZNSt12_Vector_baseIxSaIxEEC2EjRKS0_
LEHE3:
	subl	$8, %esp
	leal	-25(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIxED1Ev
	movl	-44(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv
	movl	%eax, %edi
	movl	-44(%ebp), %eax
	movl	(%eax), %ebx
	movl	8(%ebp), %ecx
	call	__ZNKSt6vectorIxSaIxEE3endEv
	movl	%eax, %esi
	movl	8(%ebp), %ecx
	call	__ZNKSt6vectorIxSaIxEE5beginEv
	movl	%edi, 12(%esp)
	movl	%ebx, 8(%esp)
	movl	%esi, 4(%esp)
	movl	%eax, (%esp)
LEHB4:
	call	__ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxxET0_T_SA_S9_RSaIT1_E
LEHE4:
	movl	%eax, %edx
	movl	-44(%ebp), %eax
	movl	%edx, 4(%eax)
	jmp	L69
L67:
	movl	%eax, %ebx
	leal	-25(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIxED1Ev
	movl	%ebx, %eax
	movl	%eax, (%esp)
LEHB5:
	call	__Unwind_Resume
L68:
	movl	%eax, %ebx
	movl	-44(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEED2Ev
	movl	%ebx, %eax
	movl	%eax, (%esp)
	call	__Unwind_Resume
LEHE5:
L69:
	leal	-12(%ebp), %esp
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE7967:
	.section	.gcc_except_table,"w"
LLSDA7967:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE7967-LLSDACSB7967
LLSDACSB7967:
	.uleb128 LEHB2-LFB7967
	.uleb128 LEHE2-LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 LEHB3-LFB7967
	.uleb128 LEHE3-LEHB3
	.uleb128 L67-LFB7967
	.uleb128 0
	.uleb128 LEHB4-LFB7967
	.uleb128 LEHE4-LEHB4
	.uleb128 L68-LFB7967
	.uleb128 0
	.uleb128 LEHB5-LFB7967
	.uleb128 LEHE5-LEHB5
	.uleb128 0
	.uleb128 0
LLSDACSE7967:
	.section	.text$_ZNSt6vectorIxSaIxEEC1ERKS1_,"x"
	.linkonce discard
	.section	.text$_ZNSaIbEC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSaIbEC1Ev
	.def	__ZNSaIbEC1Ev;	.scl	2;	.type	32;	.endef
__ZNSaIbEC1Ev:
LFB7973:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx13new_allocatorIbEC2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7973:
	.section	.text$_ZNSaIbED1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSaIbED1Ev
	.def	__ZNSaIbED1Ev;	.scl	2;	.type	32;	.endef
__ZNSaIbED1Ev:
LFB7976:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx13new_allocatorIbED2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7976:
	.section	.text$_ZNSt6vectorIbSaIbEEC1EjRKbRKS0_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt6vectorIbSaIbEEC1EjRKbRKS0_
	.def	__ZNSt6vectorIbSaIbEEC1EjRKbRKS0_;	.scl	2;	.type	32;	.endef
__ZNSt6vectorIbSaIbEEC1EjRKbRKS0_:
LFB7979:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA7979
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$52, %esp
	.cfi_offset 3, -12
	movl	%ecx, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	16(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
LEHB6:
	call	__ZNSt13_Bvector_baseISaIbEEC2ERKS0_
LEHE6:
	subl	$4, %esp
	movl	-28(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
LEHB7:
	call	__ZNSt6vectorIbSaIbEE13_M_initializeEj
LEHE7:
	subl	$4, %esp
	movl	12(%ebp), %eax
	movzbl	(%eax), %eax
	testb	%al, %al
	je	L73
	movl	$-1, %eax
	jmp	L74
L73:
	movl	$0, %eax
L74:
	movl	%eax, -12(%ebp)
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNKSt13_Bvector_baseISaIbEE13_Bvector_impl11_M_end_addrEv
	movl	%eax, %ecx
	movl	-28(%ebp), %eax
	movl	(%eax), %eax
	leal	-12(%ebp), %edx
	movl	%edx, 8(%esp)
	movl	%ecx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZSt4fillIPmiEvT_S1_RKT0_
	jmp	L77
L76:
	movl	%eax, %ebx
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt13_Bvector_baseISaIbEED2Ev
	movl	%ebx, %eax
	movl	%eax, (%esp)
LEHB8:
	call	__Unwind_Resume
LEHE8:
L77:
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret	$12
	.cfi_endproc
LFE7979:
	.section	.gcc_except_table,"w"
LLSDA7979:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE7979-LLSDACSB7979
LLSDACSB7979:
	.uleb128 LEHB6-LFB7979
	.uleb128 LEHE6-LEHB6
	.uleb128 0
	.uleb128 0
	.uleb128 LEHB7-LFB7979
	.uleb128 LEHE7-LEHB7
	.uleb128 L76-LFB7979
	.uleb128 0
	.uleb128 LEHB8-LFB7979
	.uleb128 LEHE8-LEHB8
	.uleb128 0
	.uleb128 0
LLSDACSE7979:
	.section	.text$_ZNSt6vectorIbSaIbEEC1EjRKbRKS0_,"x"
	.linkonce discard
	.section	.text$_ZNSt6vectorIbSaIbEED1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt6vectorIbSaIbEED1Ev
	.def	__ZNSt6vectorIbSaIbEED1Ev;	.scl	2;	.type	32;	.endef
__ZNSt6vectorIbSaIbEED1Ev:
LFB7982:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt13_Bvector_baseISaIbEED2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7982:
	.section	.text$_ZNSt6vectorIbSaIbEEixEj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt6vectorIbSaIbEEixEj
	.def	__ZNSt6vectorIbSaIbEEixEj;	.scl	2;	.type	32;	.endef
__ZNSt6vectorIbSaIbEEixEj:
LFB7983:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	8(%ebp), %eax
	andl	$31, %eax
	movl	%eax, %ecx
	movl	-28(%ebp), %eax
	movl	(%eax), %eax
	movl	8(%ebp), %edx
	shrl	$5, %edx
	sall	$2, %edx
	addl	%eax, %edx
	leal	-16(%ebp), %eax
	movl	%ecx, 4(%esp)
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt13_Bit_iteratorC1EPmj
	subl	$8, %esp
	leal	-16(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNKSt13_Bit_iteratordeEv
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE7983:
	.section	.text$_ZSt5__gcdIiET_S0_S0_,"x"
	.linkonce discard
	.globl	__ZSt5__gcdIiET_S0_S0_
	.def	__ZSt5__gcdIiET_S0_S0_;	.scl	2;	.type	32;	.endef
__ZSt5__gcdIiET_S0_S0_:
LFB7984:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
L83:
	cmpl	$0, 12(%ebp)
	je	L82
	movl	8(%ebp), %eax
	cltd
	idivl	12(%ebp)
	movl	%edx, -4(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, 8(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, 12(%ebp)
	jmp	L83
L82:
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7984:
	.section	.text$_ZSt12__niter_baseIPmET_S1_,"x"
	.linkonce discard
	.globl	__ZSt12__niter_baseIPmET_S1_
	.def	__ZSt12__niter_baseIPmET_S1_;	.scl	2;	.type	32;	.endef
__ZSt12__niter_baseIPmET_S1_:
LFB8082:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8082:
	.section	.text$_ZSt8__fill_aIPmiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_,"x"
	.linkonce discard
	.globl	__ZSt8__fill_aIPmiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_
	.def	__ZSt8__fill_aIPmiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_;	.scl	2;	.type	32;	.endef
__ZSt8__fill_aIPmiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_:
LFB8083:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	16(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, -4(%ebp)
L89:
	movl	8(%ebp), %eax
	cmpl	12(%ebp), %eax
	je	L90
	movl	-4(%ebp), %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	addl	$4, 8(%ebp)
	jmp	L89
L90:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8083:
	.section	.text$_ZN9__gnu_cxx14__alloc_traitsISaIxEE17_S_select_on_copyERKS1_,"x"
	.linkonce discard
	.globl	__ZN9__gnu_cxx14__alloc_traitsISaIxEE17_S_select_on_copyERKS1_
	.def	__ZN9__gnu_cxx14__alloc_traitsISaIxEE17_S_select_on_copyERKS1_;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx14__alloc_traitsISaIxEE17_S_select_on_copyERKS1_:
LFB8098:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZNSt16allocator_traitsISaIxEE37select_on_container_copy_constructionERKS0_
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8098:
	.section	.text$_ZNKSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNKSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv
	.def	__ZNKSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv;	.scl	2;	.type	32;	.endef
__ZNKSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv:
LFB8099:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8099:
	.section	.text$_ZNSaIxED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSaIxED2Ev
	.def	__ZNSaIxED2Ev;	.scl	2;	.type	32;	.endef
__ZNSaIxED2Ev:
LFB8101:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx13new_allocatorIxED2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8101:
	.section	.text$_ZNSaIxED1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSaIxED1Ev
	.def	__ZNSaIxED1Ev;	.scl	2;	.type	32;	.endef
__ZNSaIxED1Ev:
LFB8102:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx13new_allocatorIxED2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8102:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev
	.def	__ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev:
LFB8106:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIxED2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8106:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEEC2EjRKS0_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEEC2EjRKS0_
	.def	__ZNSt12_Vector_baseIxSaIxEEC2EjRKS0_;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEEC2EjRKS0_:
LFB8107:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA8107
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$36, %esp
	.cfi_offset 3, -12
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_
	subl	$4, %esp
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
LEHB9:
	call	__ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEj
LEHE9:
	subl	$4, %esp
	jmp	L101
L100:
	movl	%eax, %ebx
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev
	movl	%ebx, %eax
	movl	%eax, (%esp)
LEHB10:
	call	__Unwind_Resume
LEHE10:
L101:
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE8107:
	.section	.gcc_except_table,"w"
LLSDA8107:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE8107-LLSDACSB8107
LLSDACSB8107:
	.uleb128 LEHB9-LFB8107
	.uleb128 LEHE9-LEHB9
	.uleb128 L100-LFB8107
	.uleb128 0
	.uleb128 LEHB10-LFB8107
	.uleb128 LEHE10-LEHB10
	.uleb128 0
	.uleb128 0
LLSDACSE8107:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEEC2EjRKS0_,"x"
	.linkonce discard
	.section	.text$_ZNSt12_Vector_baseIxSaIxEED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEED2Ev
	.def	__ZNSt12_Vector_baseIxSaIxEED2Ev;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEED2Ev:
LFB8110:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA8110
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	8(%eax), %eax
	movl	%eax, %edx
	movl	-12(%ebp), %eax
	movl	(%eax), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$3, %eax
	movl	%eax, %ecx
	movl	-12(%ebp), %eax
	movl	(%eax), %edx
	movl	-12(%ebp), %eax
	movl	%ecx, 4(%esp)
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxj
	subl	$8, %esp
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8110:
	.section	.gcc_except_table,"w"
LLSDA8110:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE8110-LLSDACSB8110
LLSDACSB8110:
LLSDACSE8110:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEED2Ev,"x"
	.linkonce discard
	.section	.text$_ZNKSt6vectorIxSaIxEE5beginEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNKSt6vectorIxSaIxEE5beginEv
	.def	__ZNKSt6vectorIxSaIxEE5beginEv;	.scl	2;	.type	32;	.endef
__ZNKSt6vectorIxSaIxEE5beginEv:
LFB8112:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, -12(%ebp)
	leal	-16(%ebp), %eax
	leal	-12(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEC1ERKS2_
	subl	$4, %esp
	movl	-16(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8112:
	.section	.text$_ZNKSt6vectorIxSaIxEE3endEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNKSt6vectorIxSaIxEE3endEv
	.def	__ZNKSt6vectorIxSaIxEE3endEv;	.scl	2;	.type	32;	.endef
__ZNKSt6vectorIxSaIxEE3endEv:
LFB8113:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	4(%eax), %eax
	movl	%eax, -12(%ebp)
	leal	-16(%ebp), %eax
	leal	-12(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEC1ERKS2_
	subl	$4, %esp
	movl	-16(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8113:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv
	.def	__ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv:
LFB8114:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8114:
	.section	.text$_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxxET0_T_SA_S9_RSaIT1_E,"x"
	.linkonce discard
	.globl	__ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxxET0_T_SA_S9_RSaIT1_E
	.def	__ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxxET0_T_SA_S9_RSaIT1_E;	.scl	2;	.type	32;	.endef
__ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxxET0_T_SA_S9_RSaIT1_E:
LFB8115:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	16(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET0_T_SA_S9_
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8115:
	.section	.text$_ZN9__gnu_cxx13new_allocatorIbEC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorIbEC2Ev
	.def	__ZN9__gnu_cxx13new_allocatorIbEC2Ev;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorIbEC2Ev:
LFB8118:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8118:
	.section	.text$_ZN9__gnu_cxx13new_allocatorIbED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorIbED2Ev
	.def	__ZN9__gnu_cxx13new_allocatorIbED2Ev;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorIbED2Ev:
LFB8121:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8121:
	.section	.text$_ZNSt13_Bvector_baseISaIbEE13_Bvector_implD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt13_Bvector_baseISaIbEE13_Bvector_implD1Ev
	.def	__ZNSt13_Bvector_baseISaIbEE13_Bvector_implD1Ev;	.scl	2;	.type	32;	.endef
__ZNSt13_Bvector_baseISaIbEE13_Bvector_implD1Ev:
LFB8126:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaImED2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8126:
	.section	.text$_ZNSt13_Bvector_baseISaIbEEC2ERKS0_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt13_Bvector_baseISaIbEEC2ERKS0_
	.def	__ZNSt13_Bvector_baseISaIbEEC2ERKS0_;	.scl	2;	.type	32;	.endef
__ZNSt13_Bvector_baseISaIbEEC2ERKS0_:
LFB8127:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	leal	-9(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSaImEC1IbEERKSaIT_E
	subl	$4, %esp
	movl	-28(%ebp), %eax
	leal	-9(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt13_Bvector_baseISaIbEE13_Bvector_implC1EOSaImE
	subl	$4, %esp
	leal	-9(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaImED1Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8127:
	.section	.text$_ZNSt13_Bvector_baseISaIbEED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt13_Bvector_baseISaIbEED2Ev
	.def	__ZNSt13_Bvector_baseISaIbEED2Ev;	.scl	2;	.type	32;	.endef
__ZNSt13_Bvector_baseISaIbEED2Ev:
LFB8130:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA8130
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt13_Bvector_baseISaIbEE13_Bvector_implD1Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8130:
	.section	.gcc_except_table,"w"
LLSDA8130:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE8130-LLSDACSB8130
LLSDACSB8130:
LLSDACSE8130:
	.section	.text$_ZNSt13_Bvector_baseISaIbEED2Ev,"x"
	.linkonce discard
	.section	.text$_ZNSt6vectorIbSaIbEE13_M_initializeEj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt6vectorIbSaIbEE13_M_initializeEj
	.def	__ZNSt6vectorIbSaIbEE13_M_initializeEj;	.scl	2;	.type	32;	.endef
__ZNSt6vectorIbSaIbEE13_M_initializeEj:
LFB8132:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$52, %esp
	.cfi_offset 3, -12
	movl	%ecx, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt13_Bvector_baseISaIbEE11_M_allocateEj
	subl	$4, %esp
	movl	%eax, -12(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNSt13_Bvector_baseISaIbEE8_S_nwordEj
	leal	0(,%eax,4), %edx
	movl	-12(%ebp), %eax
	addl	%eax, %edx
	movl	-28(%ebp), %eax
	movl	%edx, 16(%eax)
	movl	-12(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt11__addressofImEPT_RS0_
	movl	%eax, %edx
	leal	-20(%ebp), %eax
	movl	$0, 4(%esp)
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt13_Bit_iteratorC1EPmj
	subl	$8, %esp
	movl	-28(%ebp), %ecx
	movl	-20(%ebp), %eax
	movl	-16(%ebp), %edx
	movl	%eax, (%ecx)
	movl	%edx, 4(%ecx)
	movl	8(%ebp), %edx
	movl	-28(%ebp), %eax
	movl	-28(%ebp), %ebx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNKSt13_Bit_iteratorplEi
	subl	$4, %esp
	movl	%eax, 8(%ebx)
	movl	%edx, 12(%ebx)
	nop
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8132:
	.section	.text$_ZNKSt13_Bvector_baseISaIbEE13_Bvector_impl11_M_end_addrEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNKSt13_Bvector_baseISaIbEE13_Bvector_impl11_M_end_addrEv
	.def	__ZNKSt13_Bvector_baseISaIbEE13_Bvector_impl11_M_end_addrEv;	.scl	2;	.type	32;	.endef
__ZNKSt13_Bvector_baseISaIbEE13_Bvector_impl11_M_end_addrEv:
LFB8133:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	16(%eax), %eax
	testl	%eax, %eax
	je	L118
	movl	-12(%ebp), %eax
	movl	16(%eax), %eax
	subl	$4, %eax
	movl	%eax, (%esp)
	call	__ZSt11__addressofImEPT_RS0_
	addl	$4, %eax
	jmp	L119
L118:
	movl	$0, %eax
L119:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8133:
	.section	.text$_ZNSt16allocator_traitsISaIxEE37select_on_container_copy_constructionERKS0_,"x"
	.linkonce discard
	.globl	__ZNSt16allocator_traitsISaIxEE37select_on_container_copy_constructionERKS0_
	.def	__ZNSt16allocator_traitsISaIxEE37select_on_container_copy_constructionERKS0_;	.scl	2;	.type	32;	.endef
__ZNSt16allocator_traitsISaIxEE37select_on_container_copy_constructionERKS0_:
LFB8178:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	movl	8(%ebp), %ecx
	call	__ZNSaIxEC1ERKS_
	subl	$4, %esp
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8178:
	.section	.text$_ZNSaIxEC2ERKS_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSaIxEC2ERKS_
	.def	__ZNSaIxEC2ERKS_;	.scl	2;	.type	32;	.endef
__ZNSaIxEC2ERKS_:
LFB8180:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx13new_allocatorIxEC2ERKS1_
	subl	$4, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8180:
	.section	.text$_ZNSaIxEC1ERKS_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSaIxEC1ERKS_
	.def	__ZNSaIxEC1ERKS_;	.scl	2;	.type	32;	.endef
__ZNSaIxEC1ERKS_:
LFB8181:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx13new_allocatorIxEC2ERKS1_
	subl	$4, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8181:
	.section	.text$_ZN9__gnu_cxx13new_allocatorIxED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorIxED2Ev
	.def	__ZN9__gnu_cxx13new_allocatorIxED2Ev;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorIxED2Ev:
LFB8183:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8183:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_
	.def	__ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_:
LFB8187:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSaIxEC2ERKS_
	subl	$4, %esp
	movl	-12(%ebp), %eax
	movl	$0, (%eax)
	movl	-12(%ebp), %eax
	movl	$0, 4(%eax)
	movl	-12(%ebp), %eax
	movl	$0, 8(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8187:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEj
	.def	__ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEj;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEj:
LFB8188:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEE11_M_allocateEj
	subl	$4, %esp
	movl	%eax, %edx
	movl	-12(%ebp), %eax
	movl	%edx, (%eax)
	movl	-12(%ebp), %eax
	movl	(%eax), %edx
	movl	-12(%ebp), %eax
	movl	%edx, 4(%eax)
	movl	-12(%ebp), %eax
	movl	(%eax), %eax
	movl	8(%ebp), %edx
	sall	$3, %edx
	addl	%eax, %edx
	movl	-12(%ebp), %eax
	movl	%edx, 8(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8188:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxj
	.def	__ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxj;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxj:
LFB8189:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	cmpl	$0, 8(%ebp)
	je	L129
	movl	-12(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, 8(%esp)
	movl	8(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxj
L129:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE8189:
	.section	.text$_ZN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEC1ERKS2_,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEC1ERKS2_
	.def	__ZN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEC1ERKS2_;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEC1ERKS2_:
LFB8192:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	8(%ebp), %eax
	movl	(%eax), %edx
	movl	-4(%ebp), %eax
	movl	%edx, (%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8192:
	.section	.text$_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET0_T_SA_S9_,"x"
	.linkonce discard
	.globl	__ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET0_T_SA_S9_
	.def	__ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET0_T_SA_S9_;	.scl	2;	.type	32;	.endef
__ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET0_T_SA_S9_:
LFB8193:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movb	$1, -9(%ebp)
	movl	16(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxEET0_T_SC_SB_
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8193:
	.section	.text$_ZNSaImEC1IbEERKSaIT_E,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSaImEC1IbEERKSaIT_E
	.def	__ZNSaImEC1IbEERKSaIT_E;	.scl	2;	.type	32;	.endef
__ZNSaImEC1IbEERKSaIT_E:
LFB8197:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx13new_allocatorImEC2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8197:
	.section	.text$_ZNSaImED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSaImED2Ev
	.def	__ZNSaImED2Ev;	.scl	2;	.type	32;	.endef
__ZNSaImED2Ev:
LFB8199:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx13new_allocatorImED2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8199:
	.section	.text$_ZNSaImED1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSaImED1Ev
	.def	__ZNSaImED1Ev;	.scl	2;	.type	32;	.endef
__ZNSaImED1Ev:
LFB8200:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx13new_allocatorImED2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8200:
	.section	.text$_ZSt4moveIRSaImEEONSt16remove_referenceIT_E4typeEOS3_,"x"
	.linkonce discard
	.globl	__ZSt4moveIRSaImEEONSt16remove_referenceIT_E4typeEOS3_
	.def	__ZSt4moveIRSaImEEONSt16remove_referenceIT_E4typeEOS3_;	.scl	2;	.type	32;	.endef
__ZSt4moveIRSaImEEONSt16remove_referenceIT_E4typeEOS3_:
LFB8202:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8202:
	.section	.text$_ZNSt13_Bvector_baseISaIbEE13_Bvector_implC1EOSaImE,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt13_Bvector_baseISaIbEE13_Bvector_implC1EOSaImE
	.def	__ZNSt13_Bvector_baseISaIbEE13_Bvector_implC1EOSaImE;	.scl	2;	.type	32;	.endef
__ZNSt13_Bvector_baseISaIbEE13_Bvector_implC1EOSaImE:
LFB8204:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt4moveIRSaImEEONSt16remove_referenceIT_E4typeEOS3_
	movl	%eax, %edx
	movl	-12(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSaImEC2ERKS_
	subl	$4, %esp
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt13_Bit_iteratorC1Ev
	movl	-12(%ebp), %eax
	addl	$8, %eax
	movl	%eax, %ecx
	call	__ZNSt13_Bit_iteratorC1Ev
	movl	-12(%ebp), %eax
	movl	$0, 16(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8204:
	.section	.text$_ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv
	.def	__ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv;	.scl	2;	.type	32;	.endef
__ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv:
LFB8205:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	(%eax), %eax
	testl	%eax, %eax
	je	L141
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNKSt13_Bvector_baseISaIbEE13_Bvector_impl11_M_end_addrEv
	movl	%eax, %edx
	movl	-28(%ebp), %eax
	movl	(%eax), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$2, %eax
	movl	%eax, -12(%ebp)
	movl	-28(%ebp), %eax
	movl	16(%eax), %eax
	movl	-12(%ebp), %edx
	sall	$2, %edx
	negl	%edx
	leal	(%eax,%edx), %ecx
	movl	-28(%ebp), %eax
	movl	-12(%ebp), %edx
	movl	%edx, 8(%esp)
	movl	%ecx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZNSt16allocator_traitsISaImEE10deallocateERS0_Pmj
L141:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8205:
	.section	.text$_ZNSt13_Bvector_baseISaIbEE11_M_allocateEj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt13_Bvector_baseISaIbEE11_M_allocateEj
	.def	__ZNSt13_Bvector_baseISaIbEE11_M_allocateEj;	.scl	2;	.type	32;	.endef
__ZNSt13_Bvector_baseISaIbEE11_M_allocateEj:
LFB8206:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNSt13_Bvector_baseISaIbEE8_S_nwordEj
	movl	%eax, %edx
	movl	-12(%ebp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZNSt16allocator_traitsISaImEE8allocateERS0_j
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8206:
	.section	.text$_ZNSt13_Bvector_baseISaIbEE8_S_nwordEj,"x"
	.linkonce discard
	.globl	__ZNSt13_Bvector_baseISaIbEE8_S_nwordEj
	.def	__ZNSt13_Bvector_baseISaIbEE8_S_nwordEj;	.scl	2;	.type	32;	.endef
__ZNSt13_Bvector_baseISaIbEE8_S_nwordEj:
LFB8207:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	addl	$31, %eax
	shrl	$5, %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8207:
	.section	.text$_ZSt11__addressofImEPT_RS0_,"x"
	.linkonce discard
	.globl	__ZSt11__addressofImEPT_RS0_
	.def	__ZSt11__addressofImEPT_RS0_;	.scl	2;	.type	32;	.endef
__ZSt11__addressofImEPT_RS0_:
LFB8208:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8208:
	.section	.text$_ZN9__gnu_cxx13new_allocatorIxEC2ERKS1_,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorIxEC2ERKS1_
	.def	__ZN9__gnu_cxx13new_allocatorIxEC2ERKS1_;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorIxEC2ERKS1_:
LFB8252:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8252:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE11_M_allocateEj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEE11_M_allocateEj
	.def	__ZNSt12_Vector_baseIxSaIxEE11_M_allocateEj;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEE11_M_allocateEj:
LFB8254:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	cmpl	$0, 8(%ebp)
	je	L150
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZNSt16allocator_traitsISaIxEE8allocateERS0_j
	jmp	L152
L150:
	movl	$0, %eax
L152:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8254:
	.section	.text$_ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxj,"x"
	.linkonce discard
	.globl	__ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxj
	.def	__ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxj;	.scl	2;	.type	32;	.endef
__ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxj:
LFB8255:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	16(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	movl	8(%ebp), %ecx
	call	__ZN9__gnu_cxx13new_allocatorIxE10deallocateEPxj
	subl	$8, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8255:
	.section	.text$_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxEET0_T_SC_SB_,"x"
	.linkonce discard
	.globl	__ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxEET0_T_SC_SB_
	.def	__ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxEET0_T_SC_SB_;	.scl	2;	.type	32;	.endef
__ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxEET0_T_SC_SB_:
LFB8256:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	16(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET0_T_SA_S9_
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8256:
	.section	.text$_ZN9__gnu_cxx13new_allocatorImEC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorImEC2Ev
	.def	__ZN9__gnu_cxx13new_allocatorImEC2Ev;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorImEC2Ev:
LFB8259:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8259:
	.section	.text$_ZN9__gnu_cxx13new_allocatorImED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorImED2Ev
	.def	__ZN9__gnu_cxx13new_allocatorImED2Ev;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorImED2Ev:
LFB8262:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8262:
	.section	.text$_ZNSaImEC2ERKS_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSaImEC2ERKS_
	.def	__ZNSaImEC2ERKS_;	.scl	2;	.type	32;	.endef
__ZNSaImEC2ERKS_:
LFB8265:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx13new_allocatorImEC2ERKS1_
	subl	$4, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8265:
	.section	.text$_ZNSt16allocator_traitsISaImEE10deallocateERS0_Pmj,"x"
	.linkonce discard
	.globl	__ZNSt16allocator_traitsISaImEE10deallocateERS0_Pmj
	.def	__ZNSt16allocator_traitsISaImEE10deallocateERS0_Pmj;	.scl	2;	.type	32;	.endef
__ZNSt16allocator_traitsISaImEE10deallocateERS0_Pmj:
LFB8267:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	16(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	movl	8(%ebp), %ecx
	call	__ZN9__gnu_cxx13new_allocatorImE10deallocateEPmj
	subl	$8, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8267:
	.section	.text$_ZNSt16allocator_traitsISaImEE8allocateERS0_j,"x"
	.linkonce discard
	.globl	__ZNSt16allocator_traitsISaImEE8allocateERS0_j
	.def	__ZNSt16allocator_traitsISaImEE8allocateERS0_j;	.scl	2;	.type	32;	.endef
__ZNSt16allocator_traitsISaImEE8allocateERS0_j:
LFB8268:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$0, 4(%esp)
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	movl	8(%ebp), %ecx
	call	__ZN9__gnu_cxx13new_allocatorImE8allocateEjPKv
	subl	$8, %esp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8268:
	.section	.text$_ZNSt16allocator_traitsISaIxEE8allocateERS0_j,"x"
	.linkonce discard
	.globl	__ZNSt16allocator_traitsISaIxEE8allocateERS0_j
	.def	__ZNSt16allocator_traitsISaIxEE8allocateERS0_j;	.scl	2;	.type	32;	.endef
__ZNSt16allocator_traitsISaIxEE8allocateERS0_j:
LFB8301:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$0, 4(%esp)
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	movl	8(%ebp), %ecx
	call	__ZN9__gnu_cxx13new_allocatorIxE8allocateEjPKv
	subl	$8, %esp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8301:
	.section	.text$_ZN9__gnu_cxx13new_allocatorIxE10deallocateEPxj,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorIxE10deallocateEPxj
	.def	__ZN9__gnu_cxx13new_allocatorIxE10deallocateEPxj;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorIxE10deallocateEPxj:
LFB8302:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZdlPv
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE8302:
	.section	.text$_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET0_T_SA_S9_,"x"
	.linkonce discard
	.globl	__ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET0_T_SA_S9_
	.def	__ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET0_T_SA_S9_;	.scl	2;	.type	32;	.endef
__ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET0_T_SA_S9_:
LFB8303:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$20, %esp
	.cfi_offset 3, -12
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEET_S8_
	movl	%eax, %ebx
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEET_S8_
	movl	%eax, %edx
	movl	16(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	%ebx, 4(%esp)
	movl	%edx, (%esp)
	call	__ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET1_T0_SA_S9_
	addl	$20, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8303:
	.section	.text$_ZN9__gnu_cxx13new_allocatorImEC2ERKS1_,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorImEC2ERKS1_
	.def	__ZN9__gnu_cxx13new_allocatorImEC2ERKS1_;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorImEC2ERKS1_:
LFB8305:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8305:
	.section	.text$_ZN9__gnu_cxx13new_allocatorImE10deallocateEPmj,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorImE10deallocateEPmj
	.def	__ZN9__gnu_cxx13new_allocatorImE10deallocateEPmj;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorImE10deallocateEPmj:
LFB8307:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZdlPv
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE8307:
	.section	.text$_ZN9__gnu_cxx13new_allocatorImE8allocateEjPKv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorImE8allocateEjPKv
	.def	__ZN9__gnu_cxx13new_allocatorImE8allocateEjPKv;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorImE8allocateEjPKv:
LFB8308:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNK9__gnu_cxx13new_allocatorImE8max_sizeEv
	cmpl	8(%ebp), %eax
	setb	%al
	testb	%al, %al
	je	L170
	call	__ZSt17__throw_bad_allocv
L170:
	movl	8(%ebp), %eax
	sall	$2, %eax
	movl	%eax, (%esp)
	call	__Znwj
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE8308:
	.section	.text$_ZN9__gnu_cxx13new_allocatorIxE8allocateEjPKv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorIxE8allocateEjPKv
	.def	__ZN9__gnu_cxx13new_allocatorIxE8allocateEjPKv;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorIxE8allocateEjPKv:
LFB8333:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNK9__gnu_cxx13new_allocatorIxE8max_sizeEv
	cmpl	8(%ebp), %eax
	setb	%al
	testb	%al, %al
	je	L173
	call	__ZSt17__throw_bad_allocv
L173:
	movl	8(%ebp), %eax
	sall	$3, %eax
	movl	%eax, (%esp)
	call	__Znwj
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE8333:
	.section	.text$_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEET_S8_,"x"
	.linkonce discard
	.globl	__ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEET_S8_
	.def	__ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEET_S8_;	.scl	2;	.type	32;	.endef
__ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEET_S8_:
LFB8334:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8334:
	.section	.text$_ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET1_T0_SA_S9_,"x"
	.linkonce discard
	.globl	__ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET1_T0_SA_S9_
	.def	__ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET1_T0_SA_S9_;	.scl	2;	.type	32;	.endef
__ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEEEPxET1_T0_SA_S9_:
LFB8335:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%esi
	pushl	%ebx
	subl	$16, %esp
	.cfi_offset 6, -12
	.cfi_offset 3, -16
	movl	16(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt12__niter_baseIPxET_S1_
	movl	%eax, %esi
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt12__niter_baseIPKxSt6vectorIxSaIxEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
	movl	%eax, %ebx
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt12__niter_baseIPKxSt6vectorIxSaIxEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
	movl	%esi, 8(%esp)
	movl	%ebx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZSt13__copy_move_aILb0EPKxPxET1_T0_S4_S3_
	addl	$16, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8335:
	.section	.text$_ZNK9__gnu_cxx13new_allocatorImE8max_sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNK9__gnu_cxx13new_allocatorImE8max_sizeEv
	.def	__ZNK9__gnu_cxx13new_allocatorImE8max_sizeEv;	.scl	2;	.type	32;	.endef
__ZNK9__gnu_cxx13new_allocatorImE8max_sizeEv:
LFB8336:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	$1073741823, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8336:
	.section	.text$_ZNK9__gnu_cxx13new_allocatorIxE8max_sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNK9__gnu_cxx13new_allocatorIxE8max_sizeEv
	.def	__ZNK9__gnu_cxx13new_allocatorIxE8max_sizeEv;	.scl	2;	.type	32;	.endef
__ZNK9__gnu_cxx13new_allocatorIxE8max_sizeEv:
LFB8345:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	$536870911, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8345:
	.section	.text$_ZSt12__niter_baseIPKxSt6vectorIxSaIxEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE,"x"
	.linkonce discard
	.globl	__ZSt12__niter_baseIPKxSt6vectorIxSaIxEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
	.def	__ZSt12__niter_baseIPKxSt6vectorIxSaIxEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE;	.scl	2;	.type	32;	.endef
__ZSt12__niter_baseIPKxSt6vectorIxSaIxEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE:
LFB8346:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	leal	8(%ebp), %ecx
	call	__ZNK9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEE4baseEv
	movl	(%eax), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8346:
	.section	.text$_ZSt12__niter_baseIPxET_S1_,"x"
	.linkonce discard
	.globl	__ZSt12__niter_baseIPxET_S1_
	.def	__ZSt12__niter_baseIPxET_S1_;	.scl	2;	.type	32;	.endef
__ZSt12__niter_baseIPxET_S1_:
LFB8347:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8347:
	.section	.text$_ZSt13__copy_move_aILb0EPKxPxET1_T0_S4_S3_,"x"
	.linkonce discard
	.globl	__ZSt13__copy_move_aILb0EPKxPxET1_T0_S4_S3_
	.def	__ZSt13__copy_move_aILb0EPKxPxET1_T0_S4_S3_;	.scl	2;	.type	32;	.endef
__ZSt13__copy_move_aILb0EPKxPxET1_T0_S4_S3_:
LFB8348:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movb	$1, -9(%ebp)
	movl	16(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIxEEPT_PKS3_S6_S4_
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8348:
	.section	.text$_ZNK9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEE4baseEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNK9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEE4baseEv
	.def	__ZNK9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEE4baseEv;	.scl	2;	.type	32;	.endef
__ZNK9__gnu_cxx17__normal_iteratorIPKxSt6vectorIxSaIxEEE4baseEv:
LFB8351:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8351:
	.section	.text$_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIxEEPT_PKS3_S6_S4_,"x"
	.linkonce discard
	.globl	__ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIxEEPT_PKS3_S6_S4_
	.def	__ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIxEEPT_PKS3_S6_S4_;	.scl	2;	.type	32;	.endef
__ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIxEEPT_PKS3_S6_S4_:
LFB8352:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	12(%ebp), %edx
	movl	8(%ebp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$3, %eax
	movl	%eax, -12(%ebp)
	cmpl	$0, -12(%ebp)
	je	L192
	movl	-12(%ebp), %eax
	sall	$3, %eax
	movl	%eax, 8(%esp)
	movl	8(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	16(%ebp), %eax
	movl	%eax, (%esp)
	call	_memmove
L192:
	movl	-12(%ebp), %eax
	leal	0(,%eax,8), %edx
	movl	16(%ebp), %eax
	addl	%edx, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8352:
	.text
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB8362:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitD1Ev
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8362:
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB8361:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	L197
	cmpl	$65535, 12(%ebp)
	jne	L197
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitC1Ev
	movl	$___tcf_0, (%esp)
	call	_atexit
L197:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8361:
	.def	__GLOBAL__sub_I__Z9prefixSumRSt6vectorIxSaIxEES2_;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I__Z9prefixSumRSt6vectorIxSaIxEES2_:
LFB8363:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8363:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I__Z9prefixSumRSt6vectorIxSaIxEES2_
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	__Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	__ZNSirsERx;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEx;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base15sync_with_stdioEb;	.scl	2;	.type	32;	.endef
	.def	__ZNSt9basic_iosIcSt11char_traitsIcEE3tieEPSo;	.scl	2;	.type	32;	.endef
	.def	__ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	__ZdlPv;	.scl	2;	.type	32;	.endef
	.def	__ZSt17__throw_bad_allocv;	.scl	2;	.type	32;	.endef
	.def	__Znwj;	.scl	2;	.type	32;	.endef
	.def	_memmove;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
