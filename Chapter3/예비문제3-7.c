#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	float hyo, jung, hyung;
	printf("�簢���� ���ο� ������ ���̸� �Է��ϼ���.\n");
	scanf("%f %f", &hyo, &jung);
	hyung = hyo*jung;
	printf("�簢���� ���̴� %d�Դϴ�.\n", (int)hyung);

	return 0;
}