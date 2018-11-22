#include <stdio.h>
int main (void)
{
	int length, height, area;
	printf("삼각형의 밑변의 길이와 높이를 입력하시오.\n");
	scanf("%d %d", &length, &height); //두 변수를 한번에 같이 받아 들일 수 있다.

	area = length * height * 1/2;
	printf("삼각형의 넓이는 %d이다.\n", area);

	return 0;
}