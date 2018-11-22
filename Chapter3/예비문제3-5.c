#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	int hyo;
	printf("등수를 입력하세요:");
	scanf("%d", &hyo);
	printf("당신의 성적 백분율은 %f%%입니다.\n",(float)(1000-hyo)*0.1);

	return 0;
}