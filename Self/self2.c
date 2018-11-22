//짝수면 사다리꼴을 별로 표현해라 8이면 1,2,3,4,4,3,2,1 순으로/

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
		printf("짝수를 입력하세요.\n");
	}
	return 0;