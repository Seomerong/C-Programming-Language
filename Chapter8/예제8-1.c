#include<stdio.h>

int SumTwo(int a, int b); // �Լ� ����

int main(void)
{
	int x = 10, y = 5;
	int value;

	value = SumTwo(x, y);  // �Լ� ȣ��

	printf("�� ���� ��: %d\n", value);

	return 0;
}
int SumTwo(int a, int b) // �Լ� ����
{
	int result;
	result = a + b;
	return result;
}