#include<stdio.h>
int main(void) 
{
	int i;
	char d[6];
	int a[] = { 45, 20, 5, 9, 30, 15 };
	int b[] = { 23, 19, 28, 3, 11, 22 };
	
        for (i = 0; i < 6; i++){
		if (a[i] > b[i]) {
			d[i] = 'Y';
		}
		else {
			d[i] = 'N';
		}
		printf("%c ", d[i]);
	}
	return 0;
}