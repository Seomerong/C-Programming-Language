#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	int hyo, jung, hyung, seo;
	printf("���� 3���� ���� �Է��ϼ���:");
	scanf("%d %d %d", &hyo, &jung, &hyung);
	seo = hyo + jung + hyung;
	if (seo > 100)
	{
		printf("�հ�\n");
	}
	else
	{
		printf("���հ�\n");
	}
        return 0;
}