/*
** dsPIC-30 library helper
*/

extern long long __umuldi3(long long, long long);

long long
__muldi3(long long A, long long B)
{
  int sign = 0;
  long long result;

  if (A < 0) {
    A = -A;
    sign = 1;
  }

  if (B < 0) {
    B = -B;
    sign = sign ^ 1;
  }

  result = __umuldi3(A,B);
  if (sign) return -result;
  else return result;
}
