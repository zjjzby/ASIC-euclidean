// eullidean.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "gcd.h"

int main(int argc, _TCHAR* argv[])
{
	int opa, opb;
	printf("please input operator a:\n");
	scanf("%d", &opa);
	printf("please input operator b:\n");
	scanf("%d", &opb);
	printf("the most common divisor of a and b is %d", gcd(opa, opb));

	return 0;
}

