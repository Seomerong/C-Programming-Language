#include<stdio.h>
#pragma warning (disable : 4996)

int main(void)
{
	unsigned char a = 128;
	unsigned char b = 64;
	unsigned char c = 32;
	unsigned char d = 16;
	unsigned int e;

	printf("��Ʈ ���� �ñ��� ���ڸ� �Է��Ͻÿ�.\n");
	scanf("%d", &e);

	printf("ù��° ��Ʈ ���� %d�̴�.\n", (a&e) / 128);
	printf("�ι�° ��Ʈ ���� %d�̴�.\n", (b&e) / 64);
	printf("����° ��Ʈ ���� %d�̴�.\n", (c&e) / 32);
	printf("�׹�° ��Ʈ ���� %d�̴�.\n", (d&e) / 16);

	return 0;
}