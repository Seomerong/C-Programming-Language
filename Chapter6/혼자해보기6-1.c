#include<stdio.h>

int main(void)
{
	int number, i;
	printf("�ݺ� Ƚ���� �Է��ϼ��� : ");
	
                scanf("%d", &number); //ex) 5�� �Է�
	printf("for�� �����Դϴ�!!\n");
	
                for(i=1 ; i<=number ; i++) //5�� �ݺ�
	{
		printf("%d�� �ݺ��մϴ�!!\n", i); // i = 1 : 1�� �ݺ��մϴ�!!
                                                     i = 2 : 2�� �ݺ��մϴ�!! 
                                                     i = 3 : 3�� �ݺ��մϴ�!! 
                                                     i = 4 : 4�� �ݺ��մϴ�!! 
                                                     i = 5 : 5�� �ݺ��մϴ�!! 
	}
	return 0;
}