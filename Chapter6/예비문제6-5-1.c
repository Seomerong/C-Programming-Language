#include<stdio.h>
int main(void)
{
	int a=1, b=0;
	while(b<500){
		b = a+b;		
		a++;
	}
	printf("������ �ڿ����� %d�̴�.",a);
	printf("�׶������� ���� %d�̴�.",b);
	return 0;
}