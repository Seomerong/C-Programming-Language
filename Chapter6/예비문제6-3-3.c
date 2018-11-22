#include<stdio.h>
int main(void)
{
	int i, j;
	for(i=1;i<11;i++){
		for(j=0;j<2*i-1;j++){
			if(j%2!=0)continue;
			printf("%d ", j+1);
		}
		printf("\n");
	}
	return 0;
}