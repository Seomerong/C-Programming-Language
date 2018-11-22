#include<stdio.h>
int main(void) 
{
	int i, c[6] ;
	int a[] = { 45, 20, 5, 9, 30, 15 };
	int b[] = { 23, 19, 28, 3, 11, 22 };
	
        for (i = 0; i < 6; i++){
		c[i] = a[i] + b[i];
		printf("%d ", c[i]);
	}
	return 0;
}