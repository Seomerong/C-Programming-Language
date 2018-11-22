#include<stdio.h>
#pragma warning (disable : 4996)
int main(void) 
{
	unsigned char hyo = 129;
	unsigned char jung;
        printf("임의의 정수를 입력하세요:");
        scanf("%c", &jung);

	printf("입력한 정수%d의 최상위 비트와 최하위 비트값을 바꾸면 %d가 된다.\n", (int)jung, hyo^jung);

	return 0;
}