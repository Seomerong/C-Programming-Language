#include <stdio.h>
int main (void)
{
	int length, height, area;
	printf("�ﰢ���� �غ��� ���̿� ���̸� �Է��Ͻÿ�.\n");
	scanf("%d %d", &length, &height); //�� ������ �ѹ��� ���� �޾� ���� �� �ִ�.

	area = length * height * 1/2;
	printf("�ﰢ���� ���̴� %d�̴�.\n", area);

	return 0;
}