#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	int hyo;
	printf("����� �Է��ϼ���:");
	scanf("%d", &hyo);
	printf("����� ���� ������� %f%%�Դϴ�.\n",(float)(1000-hyo)*0.1);

	return 0;
}