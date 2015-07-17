	.ifdef ffunction
	.section .libm.mulsi3,code
	.else
	.section .libm,code
	.endif
        .global ___mulsi3, ___mulp32eds3, ___mulp32peds3
        
___mulsi3: 
___mulp32eds3: 
___mulp32peds3:

	mul.su w1,w2,w4
	mul.su w3,w0,w6
	mul.uu w0,w2,w0
	add w4,w1,w1
	add w6,w1,w1

	return


.include "null_signature.s"
