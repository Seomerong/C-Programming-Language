#include<stdio.h>
#pragma warning (disable : 4996)
int main(void) 
{
	unsigned char hyo = 129;
	unsigned char jung;
        printf("������ ������ �Է��ϼ���:");
        scanf("%c", &jung);

	printf("�Է��� ����%d�� �ֻ��� ��Ʈ�� ������ ��Ʈ���� �ٲٸ� %d�� �ȴ�.\n", (int)jung, hyo^jung);

	return 0;
}