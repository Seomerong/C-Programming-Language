#include<stdio.h>
int main(void)
{
	int sum = 0;
	int number = 0;
	printf("1���� 10������ ���� ���մϴ�.\n");

	do{
		number++;
		sum += number;	
	}while(number<11);
	printf("���� %d�Դϴ�.\n", sum-number);
	return 0;
}