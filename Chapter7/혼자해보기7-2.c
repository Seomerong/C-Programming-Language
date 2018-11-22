#include<stdio.h>
int main(void)
{
	int mult[] = {4, 2, 5, 1, 3};
	int i, sum = 1;
	double average;

	for (i = 0; i < 5; i++) {
		sum = sum*mult[i];
	}
	printf("°öÀº %d\n", sum);

	return 0;
}