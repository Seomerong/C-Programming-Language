#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	unsigned char hyo = 128;
	unsigned char jung = 64;
	unsigned char seo = 32;
	unsigned char sung = 16;
	unsigned int hyung;

	printf("������ ������ �Է��ϼ���:");
	scanf("%d", &hyung);

	printf("�Է��� �� %d�� ù ��° ��Ʈ�� %d�̴�.\n", hyung, (hyung&hyo) == hyo);
	printf("�Է��� �� %d�� �� ��° ��Ʈ�� %d�̴�.\n", hyung, (hyung&jung) == jung);
	printf("�Է��� �� %d�� �� ��° ��Ʈ�� %d�̴�.\n", hyung, (hyung&seo) == seo);
	printf("�Է��� �� %d�� �� ��° ��Ʈ�� %d�̴�.\n", hyung, (hyung&sung) == sung);

	return 0;
}