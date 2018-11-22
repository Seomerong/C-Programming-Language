#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	int x = 10, y = 10, z;
	x = y++;
	z = (++x)%3;
	printf("%d %d %d", x, y, z);
	return 0;
}