#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	int hyo;
	printf("������ �����µ��� �Է��ϼ���\n");
	scanf("%d", &hyo);
	printf("������ �����µ�%d�ɴ� ȭ���µ� %f���� ��Ÿ�� �� �ֽ��ϴ�.\n",hyo,(float)(hyo*1.8)+32);

	return 0;
}