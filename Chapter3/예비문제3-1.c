#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	int number = 67;
	printf("%d�� 8������ ��ȯ�ϸ� %o�̴�.\n",number,number);//103
	printf("%d�� 10������ ��ȯ�ϸ� %d�̴�.\n", number, number);//67
	printf("%d�� 16������ ��ȯ�ϸ� %x�̴�.\n", number, number);//43
	printf("%d�� �������� ��ȯ�ϸ� %c�̴�.\n", number, number);//C

	return 0;
}