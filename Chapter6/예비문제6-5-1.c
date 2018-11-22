#include<stdio.h>
int main(void)
{
	int a=1, b=0;
	while(b<500){
		b = a+b;		
		a++;
	}
	printf("마지막 자연수는 %d이다.",a);
	printf("그때까지의 합은 %d이다.",b);
	return 0;
}