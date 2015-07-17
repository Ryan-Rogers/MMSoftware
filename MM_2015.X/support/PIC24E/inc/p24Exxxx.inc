.ifdef __24EP128GP202
.include "p24EP128GP202.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP128GP204
.include "p24EP128GP204.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP128GP206
.include "p24EP128GP206.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP128MC202
.include "p24EP128MC202.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP128MC204
.include "p24EP128MC204.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP128MC206
.include "p24EP128MC206.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP256GP202
.include "p24EP256GP202.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP256GP204
.include "p24EP256GP204.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP256GP206
.include "p24EP256GP206.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP256GU810
.include "p24EP256GU810.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP256GU814
.include "p24EP256GU814.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP256MC202
.include "p24EP256MC202.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP256MC204
.include "p24EP256MC204.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP256MC206
.include "p24EP256MC206.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP32GP202
.include "p24EP32GP202.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP32GP203
.include "p24EP32GP203.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP32GP204
.include "p24EP32GP204.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP32MC202
.include "p24EP32MC202.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP32MC203
.include "p24EP32MC203.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP32MC204
.include "p24EP32MC204.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP512GP202
.include "p24EP512GP202.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP512GP204
.include "p24EP512GP204.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP512GP206
.include "p24EP512GP206.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP512GP806
.include "p24EP512GP806.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP512GU810
.include "p24EP512GU810.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP512GU814
.include "p24EP512GU814.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP512MC202
.include "p24EP512MC202.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP512MC204
.include "p24EP512MC204.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP512MC206
.include "p24EP512MC206.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP64GP202
.include "p24EP64GP202.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP64GP203
.include "p24EP64GP203.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP64GP204
.include "p24EP64GP204.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP64GP206
.include "p24EP64GP206.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP64MC202
.include "p24EP64MC202.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP64MC203
.include "p24EP64MC203.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP64MC204
.include "p24EP64MC204.inc"
.equ VALID_ID,1
.endif

.ifdef __24EP64MC206
.include "p24EP64MC206.inc"
.equ VALID_ID,1
.endif

.ifndef VALID_ID
.error "processor ID not specified in generic include file"
.endif
