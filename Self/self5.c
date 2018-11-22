//입력한 값까지 홀수의 합/
#include<stdio.h>
int main(void)
{
	int a, b, c=0;
	scanf("%d", &a);
	for (b = 1; b < a + 1; b++) {
		if (b % 2 == 1) {
			c = c + b;
		}
	}
	printf("%d", c);
	return 0;
}