#include<stdio.h>
int main(void){
	int a[]={1,2,3,4,5,};
	int *p=a;

	printf("�迭�� a�� �̿��� �ּ�ǥ��\n");
	for(int i=0; i<5; i++)
		printf("a[%d]�� �ּ� %p\n", i, a+i);

	printf("\n������ p�� �̿��� �迭 �ּ�ǥ��\n");
	for(int i=0; i<5; i++)
		printf("a[%d]�� �ּ� %p\n", i, p+i);

	printf("\n������ p�� �̿��� �迭 ��ǥ��\n");
	for(int i=0; i<5; i++)
		printf("a[%d]�� �ּ� %d\n", i, *(p+i));

	return 0;
}