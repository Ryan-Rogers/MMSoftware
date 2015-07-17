.ifdef __24HJ128GP202
.include "p24HJ128GP202.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP204
.include "p24HJ128GP204.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP206
.include "p24HJ128GP206.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP206A
.include "p24HJ128GP206A.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP210
.include "p24HJ128GP210.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP210A
.include "p24HJ128GP210A.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP306
.include "p24HJ128GP306.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP306A
.include "p24HJ128GP306A.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP310
.include "p24HJ128GP310.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP310A
.include "p24HJ128GP310A.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP502
.include "p24HJ128GP502.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP504
.include "p24HJ128GP504.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP506
.include "p24HJ128GP506.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP506A
.include "p24HJ128GP506A.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP510
.include "p24HJ128GP510.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ128GP510A
.include "p24HJ128GP510A.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ12GP201
.include "p24HJ12GP201.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ12GP202
.include "p24HJ12GP202.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ16GP304
.include "p24HJ16GP304.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ256GP206
.include "p24HJ256GP206.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ256GP206A
.include "p24HJ256GP206A.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ256GP210
.include "p24HJ256GP210.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ256GP210A
.include "p24HJ256GP210A.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ256GP610
.include "p24HJ256GP610.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ256GP610A
.include "p24HJ256GP610A.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ32GP202
.include "p24HJ32GP202.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ32GP204
.include "p24HJ32GP204.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ32GP302
.include "p24HJ32GP302.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ32GP304
.include "p24HJ32GP304.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ64GP202
.include "p24HJ64GP202.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ64GP204
.include "p24HJ64GP204.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ64GP206
.include "p24HJ64GP206.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ64GP206A
.include "p24HJ64GP206A.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ64GP210
.include "p24HJ64GP210.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ64GP210A
.include "p24HJ64GP210A.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ64GP502
.include "p24HJ64GP502.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ64GP504
.include "p24HJ64GP504.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ64GP506
.include "p24HJ64GP506.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ64GP506A
.include "p24HJ64GP506A.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ64GP510
.include "p24HJ64GP510.inc"
.equ VALID_ID,1
.endif

.ifdef __24HJ64GP510A
.include "p24HJ64GP510A.inc"
.equ VALID_ID,1
.endif

.ifndef VALID_ID
.error "processor ID not specified in generic include file"
.endif
