//1����100���� ���� 3�� ����� 5�� ����� ��� ���Ѱ�/
#include<stdio.h>
int main(void)
{
	int a, b=0;
	for (a = 1; a < 101; a++) {
		if (a % 3 == 0) {
			b = b + a;
		}
		else if (a % 5 == 0) {
			b = b + a;
		}
	}
	printf("%d", b);
	return 0;
}