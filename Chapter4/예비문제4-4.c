#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	int hyo, jung, hyung, seo;
	printf("정수 3개를 각각 입력하세요:");
	scanf("%d %d %d", &hyo, &jung, &hyung);
	seo = hyo + jung + hyung;
	if (seo > 100)
	{
		printf("합격\n");
	}
	else
	{
		printf("불합격\n");
	}
        return 0;
}