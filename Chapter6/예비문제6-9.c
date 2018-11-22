#include<stdio.h>
int main(void)
{
	int a, b = 0, c = 1, d = 0;
	printf("양의 정수를 입력하세요\n");
	scanf("%d", &a);
	if (a > 0) {
		while (d < a) {
			b = c;
			c = d;
			printf("%d\n", d);
			d = b + c;
		}
	}
	else {
		printf("양의 정수를 입력하세요.\n");
	}
	return 0;
}