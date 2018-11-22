include<stdio.h>
int main(void)
{
	int i, sum = 0;
	printf("1에서 10까지의 합을 구합니다.\n");
	for(i=1;i<=10;i++)
	{
		if(i%2!=0)continue;
		sum +=i;
	
	}
	printf("1부터 10까지 짝수의 합은 %d입니다.\n", sum);
	return 0;
}