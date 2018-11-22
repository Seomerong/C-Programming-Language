#include<stdio.h>
int main(void)
{
	int a=1, b=0;
	for(a+1;b<500;a++){
		b = a+b;		
	}
	printf("마지막 자연수는 %d이다.",a);
	printf("그때까지의 합은 %d이다.",b);
	return 0;
}