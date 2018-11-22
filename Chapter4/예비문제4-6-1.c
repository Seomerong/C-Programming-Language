#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	unsigned char hyo = 128;
	unsigned char jung = 64;
	unsigned char seo = 32;
	unsigned char sung = 16;
	unsigned int hyung;

	printf("임의의 정수를 입력하세요:");
	scanf("%d", &hyung);

	printf("입력한 값 %d의 첫 번째 비트는 %d이다.\n", hyung, (hyung&hyo) == hyo);
	printf("입력한 값 %d의 두 번째 비트는 %d이다.\n", hyung, (hyung&jung) == jung);
	printf("입력한 값 %d의 세 번째 비트는 %d이다.\n", hyung, (hyung&seo) == seo);
	printf("입력한 값 %d의 네 번째 비트는 %d이다.\n", hyung, (hyung&sung) == sung);

	return 0;
}