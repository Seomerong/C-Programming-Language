#include<stdio.h>
int MinThree( int x, int y, int z );
int main(void)
{
	int a, b, c, Min;
	scanf("%d %d %d", &a, &b, &c);
	Min = MinThree(a, b, c);
	printf("%d", Min);
	return 0;
}