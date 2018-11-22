#include<stdio.h>

int main(void)
{
	int i;
	for(i=97 ; i<=122 ; i++) // 아스키코드 a = 97, z = 122
	{
		printf("%c ", i); // 숫자를 아스키코드로 변경해 출력
	}
	printf("\n");
	return 0;
}