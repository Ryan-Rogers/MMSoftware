/*
** dsPIC-30 library helper
*/
#define	ASM	__asm__ volatile
long long
__ashldi3(long long A, unsigned B)
{
	while (B--)
	{
		ASM("add %0,%0,%0 ; ashldi3 ": "=r" (A): "0" (A));
		ASM("addc %d0,%d0,%d0 ; *": "=r" (A): "0" (A));
		ASM("addc %t0,%t0,%t0 ; *": "=r" (A): "0" (A));
		ASM("addc %q0,%q0,%q0 ; *": "=r" (A): "0" (A));
	}
	return(A);
}

