#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	unsigned int secondmask = 64;
	unsigned int fourthmask = 16;
	unsigned int input;

	printf("������ ���� �Է��ϼ���:\n");
	scanf("%d", &input);

	printf("�Է��� �� %d�� �� ��° ��Ʈ�� %d�̴�.\n",input, (input&secondmask)==secondmask);
	printf("�Է��� �� %d�� �� ��° ��Ʈ�� %d�̴�.\n", input, (input&fourthmask)==fourthmask);

	return 0;
}