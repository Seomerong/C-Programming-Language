#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	char hyo;
	printf("문자 하나를 입력하세요.\n");
	hyo = getchar();
	printf("입력한 문자는 ");
	putchar(hyo);
	printf("입니다.\n");
	return 0;
}