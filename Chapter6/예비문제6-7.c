#include<stdio.h>
int main(void)
{
	int a=2, b, c=0;
	while(c<2000){
		for(b=2; b<a; ++b){
			if(a%b==0)
				break;
		}
		if(b==a){
			c = c+b;
		}
		++a;
	}
	printf("마지막 수는 %d", b);
    printf("합은 %d", c-b);
	return 0;
}