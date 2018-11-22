#include <stdio.h>
int main (void)
{
	int a = 5, b = 10, d;
	a = b++; //a=10, b=11
	d = ++a; //a=11, d=11

	printf("a = %d, b = %d, d = %d\n", a, b, d);

	a = b + ++d; //d=12, a=23
	printf("a = b + ++d 문장 실행 후 \n");
	printf("a = %d, b = %d, d = %d \n", a, b, d);

	return 0;
}