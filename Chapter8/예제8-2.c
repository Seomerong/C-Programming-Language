#include<stdio.h>

float Average(float x, float y); // �Լ� ����

int main(void)
{
	float num1, num2, result;
	printf("�Ǽ� 2���� �Է��ϼ���:");
	scanf("%f %f", &num1, &num2);

	result = Average(num1, num2); //�Լ� ȣ��

	printf("�� �Ǽ��� ���: %f\n", result);

	return 0;
}

float Average(float x, float y) // �Լ� ����
{
	float z;
	z = (x + y) / 2;
	return z;
}