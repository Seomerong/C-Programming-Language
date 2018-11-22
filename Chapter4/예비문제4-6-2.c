#include<stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	unsigned char a = 128;
	unsigned char b = 64;
	unsigned char c = 32;
	unsigned char d = 16;
	unsigned int e;

	printf("비트 값이 궁금한 숫자를 입력하시오.\n");
	scanf("%d", &e);

	printf("첫번째 비트 값은 %d이다.\n", (a&e) / 128);
	printf("두번째 비트 값은 %d이다.\n", (b&e) / 64);
	printf("세번째 비트 값은 %d이다.\n", (c&e) / 32);
	printf("네번째 비트 값은 %d이다.\n", (d&e) / 16);

	return 0;
}