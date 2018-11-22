#include<stdio.h>
int main(void){
	int a[]={1,2,3,4,5,};
	int *p=a;

	printf("배열명 a를 이용해 주소표현\n");
	for(int i=0; i<5; i++)
		printf("a[%d]의 주소 %p\n", i, a+i);

	printf("\n포인터 p를 이용해 배열 주소표현\n");
	for(int i=0; i<5; i++)
		printf("a[%d]의 주소 %p\n", i, p+i);

	printf("\n포인터 p를 이용해 배열 값표현\n");
	for(int i=0; i<5; i++)
		printf("a[%d]의 주소 %d\n", i, *(p+i));

	return 0;
}