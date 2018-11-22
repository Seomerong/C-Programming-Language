#include<stdio.h>
#pragma warning (disable : 4996)
int main(void)
{
	int hyo;
	printf("현재의 섭씨온도를 입력하세요\n");
	scanf("%d", &hyo);
	printf("현재의 섭씨온도%d℃는 화씨온도 %f℉로 나타낼 수 있습니다.\n",hyo,(float)(hyo*1.8)+32);

	return 0;
}