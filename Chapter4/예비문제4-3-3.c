#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	int a, b, c;
	a = 20; b = 10;
	a += b;
	c = ++a;
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	a = b + ++c;
	printf("a = b + ++c 문장 실행 후\n");
	printf("a = %d, b = %d, c = %d\n", a, b, c );

	a = b++ + c++;
	printf("a = b++ + c++ 문장 실행 후\n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	return 0;
}