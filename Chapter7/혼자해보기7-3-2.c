#include<stdio.h>
int main(void)
{
	int i, j, sum=0;
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };

	for (i = 0; i < 3; i++) {
		sum = 0;
		for (j = 0; j < 3; j++) {
			sum = sum + a[i][j];   
		}
        printf("%d���� ���Ҹ� �� ���ϸ�%d\n", i, sum);//6 15 24
	}

	return 0;
}