// stein.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define CHECK(a) (!(1&(a)))
#define CLEAN2(a) while(CHECK(a))a=a>>1
#define BIGERA if(a > b)(t = a, a = b, b = t)
int gcd(int a, int b);



int _tmain(int argc, _TCHAR* argv[])
{
	int opa, opb;
	printf("please input operator a:\n");
	scanf("%d", &opa);
	printf("please input operator b:\n");
	scanf("%d", &opb);
	printf("the most common divisor is %d", gcd(opa, opb));
	return 0;
}

int gcd(int a, int b)
{
	int c_2 = 0, t;
	while ((CHECK(a)) && (CHECK(b)))
	{
		a = a >> 1;
		b = b >> 1;
		c_2++;
	}
	CLEAN2(a);
	CLEAN2(b);
	BIGERA;
	while (a = ((a - b) >> 1))
	{
		CLEAN2(a);
		BIGERA;
	}
	return b << c_2;

}

