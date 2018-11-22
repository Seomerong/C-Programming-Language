#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	int number = 67;
	printf("%d을 8진수로 변환하면 %o이다.\n",number,number);//103
	printf("%d을 10진수로 변환하면 %d이다.\n", number, number);//67
	printf("%d을 16진수로 변환하면 %x이다.\n", number, number);//43
	printf("%d을 문자형로 변환하면 %c이다.\n", number, number);//C

	return 0;
}