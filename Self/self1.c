//2~100사이의 소수 출력/

#include<stdio.h>
int main(void)
{
	int i;
	printf("2 3 5 7 ");
	for (i = 11; i < 101; i++) {
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0) {
			printf("%d ", i);
		}
	}
	return 0;
}