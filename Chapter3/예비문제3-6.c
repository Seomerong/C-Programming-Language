#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	double hyo, jung;
	printf("���� ������ ���̸� �Է��ϼ���.\n");
	scanf("%lf", &hyo);
#define PIE 3.141592

	jung = hyo*hyo*PIE;
	printf("���� ���̴� %lf�Դϴ�.\n", jung);

	return 0;
}