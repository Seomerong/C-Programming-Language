//¦���� ��ٸ����� ���� ǥ���ض� 8�̸� 1,2,3,4,4,3,2,1 ������/

#include<stdio.h>
int main(void)
{
	int i, j, k;
	scanf("%d", &i);
	if (i % 2 == 0) {
		for (j = 0; j < (i/2); j++) {
			for (k=0;k<j+1;k++) {
				printf("*");
			}
			printf("\n");
		}
		for (j = (i / 2); j < i; j++) {
			for (k = 0; k < i-j; k++) {
				printf("*");
			}
			printf("\n");
		}
	}
	else if (i % 2 != 0) {
		printf("¦���� �Է��ϼ���.\n");
	}
	return 0;