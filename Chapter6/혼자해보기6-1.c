#include<stdio.h>

int main(void)
{
	int number, i;
	printf("반복 횟수를 입력하세요 : ");
	
                scanf("%d", &number); //ex) 5를 입력
	printf("for문 예제입니다!!\n");
	
                for(i=1 ; i<=number ; i++) //5번 반복
	{
		printf("%d번 반복합니다!!\n", i); // i = 1 : 1번 반복합니다!!
                                                     i = 2 : 2번 반복합니다!! 
                                                     i = 3 : 3번 반복합니다!! 
                                                     i = 4 : 4번 반복합니다!! 
                                                     i = 5 : 5번 반복합니다!! 
	}
	return 0;
}