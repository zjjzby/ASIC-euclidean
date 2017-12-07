//#define TEST

#ifdef TEST
	#include<stdio.h>
#else
	#include<svdpi.h>
#endif


long gcdfunc(long bigger, long smaller)
{
	if (smaller == 0)
		return bigger;
	return gcdfunc(smaller, bigger%smaller);
}

long gcd(long a, long b)
{
	if (a == b)
		return a;
	else if (a > b)
		return gcdfunc(a, b);
	else
		return gcdfunc(b, a);
}
