#include<stdio.h>
int main(void)
{
	int a=1, b=0;
	for(a+1;b<500;a++){
		b = a+b;		
	}
	printf("������ �ڿ����� %d�̴�.",a);
	printf("�׶������� ���� %d�̴�.",b);
	return 0;
}