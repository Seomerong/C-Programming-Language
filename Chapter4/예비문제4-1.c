#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	int x = 5, y = 3;
	const int z = 3;
	x = x + 5;
	x = y + 3;

	return 0;
}