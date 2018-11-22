//입력한 값까지 더하기/
#include<stdio.h>
int main(void)
{
	int a, b, c=0;
	scanf("%d", &a);
	for (b = 1; b < a + 1; b++) {
		c = c + b;
	}
	printf("%d", c);
	return 0;
}