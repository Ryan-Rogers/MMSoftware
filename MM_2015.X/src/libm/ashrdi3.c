/*
** dsPIC-30 library helper
*/
#define	ASM	__asm__ volatile
unsigned long long
__ashrdi3(unsigned long long A, unsigned B)
{
	while (B--)
	{
		ASM("asr %q0,%q0 ; ashrdi3 ": "=r" (A): "0" (A));
		ASM("rrc %t0,%t0 ; *": "=r" (A): "0" (A));
		ASM("rrc %d0,%d0 ; *": "=r" (A): "0" (A));
		ASM("rrc %0,%0 ; *": "=r" (A): "0" (A));
	}
	return(A);
}

