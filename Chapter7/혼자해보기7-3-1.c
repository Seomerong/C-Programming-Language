#include<stdio.h>
int main(void)
{
	int i, j, sum=0;
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };

	for (j = 0; j < 3; j++) {
		sum = 0;
		for (i = 0; i < 3; i++) {
			sum = sum + a[i][j];   
		}
        printf("%d열의 원소를 다 더하면%d\n", j, sum);//12 15 18
	}

	return 0;
}