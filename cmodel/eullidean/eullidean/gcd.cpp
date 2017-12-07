#include "gcd.h"
#include "stdafx.h"

int gcdfunc(int bigger, int  smaller)
{
	if (smaller == 0)
		return bigger;
	return gcdfunc(smaller, bigger%smaller);
}

int gcd(int a, int b)
{
	if (a == b)
		return a;
	else if (a > b)
		return gcdfunc(a, b);
	else
		return gcdfunc(b, a);
}

