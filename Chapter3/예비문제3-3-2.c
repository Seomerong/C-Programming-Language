#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	char hyo;
	printf("문자 하나를 입력하세요.\n");
	scanf("%c", &hyo);
	printf("입력한 문자는 %c입니다.\n", hyo);

	return 0;
}