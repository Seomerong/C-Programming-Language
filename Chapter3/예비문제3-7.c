#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	float hyo, jung, hyung;
	printf("사각형의 가로와 세로의 길이를 입력하세요.\n");
	scanf("%f %f", &hyo, &jung);
	hyung = hyo*jung;
	printf("사각형의 넓이는 %d입니다.\n", (int)hyung);

	return 0;
}