#include<stdio.h>
int main(void)
{
	int i;
	char a[10];
	scanf("%s", &a);
	char b[] = "code";
	for (i = 0; i < 4; i++) {
		if (a[i] != b[i]) {
			printf("��й�ȣ�� �ٽ� �Է��ϼ���.\n");
		}
		else {
			if (i == 3 && a[3] == b[3])
				printf("���α׷��� �����մϴ�.\n");
		}
	}

	return 0;
}