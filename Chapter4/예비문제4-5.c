#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	int hyo, jung;
	printf("�� ���� ������ �Է��ϼ���.\n");
	scanf("%d %d", &hyo, &jung);

	printf("AND ��Ʈ �� ������ ������ ��� : %d\n", hyo&jung);
	printf("OR ��Ʈ �� ������ ������ ��� : %d\n", hyo|jung);
	printf("XOR ��Ʈ �� ������ ������ ��� : %d\n", hyo^jung);

	return 0;
}