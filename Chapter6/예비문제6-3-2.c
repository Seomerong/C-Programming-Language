3-2)
#include<stdio.h>
int main(void)
{
	int i, j;
	for(i=0;i<3;i++){
		for(j=0;j<5-2*i;j++){
			printf("*");
		}
	    printf("\n");
	}
	return 0;
}