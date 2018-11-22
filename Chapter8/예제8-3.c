#include<stdio.h>

int Integral(int start, int end);
int main(void)
{
	int start, end, result;
	printf("정수 2개를 입력하세요:");
	scanf("%d %d", &start, &end);

	result = Integral(start, end);
	printf("시작값에서 종료값까지 더한 합은 %d이다.", result);
}

int Integral(int start, int end)
{
	int sum = 0, i;
	for (i = start; i <= end; i++);
	sum += i;
	return sum;
}
//함수를 위에 적으면 함수를 선언하지 않아도 됨.