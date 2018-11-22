#include<stdio.h>
int main(void)
{
	int i;
	char a[10];
	scanf("%s", &a);
	char b[] = "code";
	for (i = 0; i < 4; i++) {
		if (a[i] != b[i]) {
			printf("비밀번호를 다시 입력하세요.\n");
		}
		else {
			if (i == 3 && a[3] == b[3])
				printf("프로그램을 종료합니다.\n");
		}
	}

	return 0;
}