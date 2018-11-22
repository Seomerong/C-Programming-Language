#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	unsigned int secondmask = 64;
	unsigned int fourthmask = 16;
	unsigned int input;

	printf("임의의 수를 입력하세요:\n");
	scanf("%d", &input);

	printf("입력한 값 %d의 두 번째 비트는 %d이다.\n",input, (input&secondmask)==secondmask);
	printf("입력한 값 %d의 네 번째 비트는 %d이다.\n", input, (input&fourthmask)==fourthmask);

	return 0;
}