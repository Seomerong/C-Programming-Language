include<stdio.h>
int main(void)
{
	int i, sum = 0;
	printf("1���� 10������ ���� ���մϴ�.\n");
	for(i=1;i<=10;i++)
	{
		if(i%2!=0)continue;
		sum +=i;
	
	}
	printf("1���� 10���� ¦���� ���� %d�Դϴ�.\n", sum);
	return 0;
}