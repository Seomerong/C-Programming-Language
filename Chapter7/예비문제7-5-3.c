#include<stdio.h>
int main(void)
{
	int i;
	char a[10];
	char b[] = "code";
	do {
		scanf("%s", &a);
		for (i = 0; i < 4; i++) {
			if (a[i] != b[i]) {
				printf("��й�ȣ�� �ٽ� �Է��ϼ���.\n");
				break;
			}
			else {
				if (i == 3 && a[3] == b[3])
					printf("���α׷��� �����մϴ�.\n");
			}
		}
	} while (a[0]!=b[0]|| a[1] != b[1]|| a[2] != b[2]|| a[3] != b[3]);

	return 0;
}