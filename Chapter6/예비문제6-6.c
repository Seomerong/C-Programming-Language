#include<stdio.h>
int main(void)
{
	int a;
	for(a=1;a<=100;a++){
		if(a%2!=0||a%6!=0)continue;
		{
			printf("%d\n", a);
		}
	}
	return 0;
}