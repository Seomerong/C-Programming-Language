#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	int hyo, jung;
	printf("두 개의 정수를 입력하세요.\n");
	scanf("%d %d", &hyo, &jung);

	printf("AND 비트 논리 연산을 수행한 결과 : %d\n", hyo&jung);
	printf("OR 비트 논리 연산을 수행한 결과 : %d\n", hyo|jung);
	printf("XOR 비트 논리 연산을 수행한 결과 : %d\n", hyo^jung);

	return 0;
}