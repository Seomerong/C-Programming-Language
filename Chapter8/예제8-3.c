#include<stdio.h>

int Integral(int start, int end);
int main(void)
{
	int start, end, result;
	printf("���� 2���� �Է��ϼ���:");
	scanf("%d %d", &start, &end);

	result = Integral(start, end);
	printf("���۰����� ���ᰪ���� ���� ���� %d�̴�.", result);
}

int Integral(int start, int end)
{
	int sum = 0, i;
	for (i = start; i <= end; i++);
	sum += i;
	return sum;
}
//�Լ��� ���� ������ �Լ��� �������� �ʾƵ� ��.