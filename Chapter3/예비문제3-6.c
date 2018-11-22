#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	double hyo, jung;
	printf("원의 반지름 길이를 입력하세요.\n");
	scanf("%lf", &hyo);
#define PIE 3.141592

	jung = hyo*hyo*PIE;
	printf("원의 넓이는 %lf입니다.\n", jung);

	return 0;
}