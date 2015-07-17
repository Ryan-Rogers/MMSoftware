/*
** dsPIC-30 library helper
*/
static void
__PplusBdi(int *P, long long B)
{
	((unsigned long long *)P)[0] += B;
	if (((unsigned long long *)P)[0] < B)
	{
		P[4]++;
	}
}
static void
__PminusBdi(int *P, long long B)
{
	int borrow;

	borrow = (((unsigned long long *)P)[0] < B) ? 1 : 0;
	((unsigned long long *)P)[0] -= B;
	P[4] -= borrow;
}
unsigned long long
__udivmoddi3(unsigned long long A, unsigned long long B, int fQ)
{
	int P[5];
	int i;

	P[0] = P[1] = P[2] = P[3] = P[4] = 0;

	for (i = 0; i < 64; ++i)
	{
		if (P[4] < 0)
		{
			/*
			** (P,A) <<= 1
			*/
			P[4] <<= 1;
			P[4] |= P[3] < 0;
			P[3] <<= 1;
			P[3] |= P[2] < 0;
			P[2] <<= 1;
			P[2] |= P[1] < 0;
			P[1] <<= 1;
			P[1] |= P[0] < 0;
			P[0] <<= 1;
			P[0] |= (long long)A < 0;
			A <<= 1;

			/*
			** P += B
			*/
			__PplusBdi(P, B);
		}
		else
		{
			/*
			** (P,A) <<= 1
			*/
			P[4] <<= 1;
			P[4] |= P[3] < 0;
			P[3] <<= 1;
			P[3] |= P[2] < 0;
			P[2] <<= 1;
			P[2] |= P[1] < 0;
			P[1] <<= 1;
			P[1] |= P[0] < 0;
			P[0] <<= 1;
			P[0] |= (long long)A < 0;
			A <<= 1;

			/*
			** P -= B
			*/
			__PminusBdi(P, B);
		}
		/*
		** If P is negative, set the low-order bit of A to 0,
		** otherwise to 1.
		*/
		if (P[4] >= 0)
		{
			A |= 1;
		}
	}
	/*
	** If P is non-negative, it is the remainder.
	** Otherwise, it needs to be restored (i.e., add B).
	*/
	if (P[4] < 0)
	{
		/*
		** P += B
		*/
		__PplusBdi(P, B);
	}
	if (fQ)
	{
		return(A);
	}
	else
	{
		return(((unsigned long long *)P)[0]);
	}
}
unsigned long long
__udivdi3(unsigned long long A, unsigned long long B)
{
	return(__udivmoddi3(A, B, 1));
}
unsigned long long
__umoddi3(unsigned long long A, unsigned long long B)
{
	return(__udivmoddi3(A, B, 0));
}
long long
__divdi3(long long A, long long B)
{
	long long Q;
	int fNeg = 0;

	if (A < 0)
	{
		A = -A;
		if (B < 0)
		{
			B = -B;
		}
		else
		{
			fNeg = 1;
		}
	}
	else if (B < 0)
	{
		B = -B;
		fNeg = 1;
	}
	Q = __udivdi3(A, B);
	if (fNeg)
	{
		Q = -Q;
	}
	return(Q);
}
long long
__moddi3(long long A, long long B)
{
	long long R;
	int fNeg = 0;

	if (A < 0)
	{
		fNeg = 1;
		A = -A;
		if (B < 0)
		{
			B = -B;
		}
	}
	else if (B < 0)
	{
		B = -B;
	}
	R = __umoddi3(A, B);
	if (fNeg)
	{
		R = -R;
	}
	return(R);
}
