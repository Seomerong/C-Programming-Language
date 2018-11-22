#include<stdio.h>
int main(void) 
{
	int i;
	int c[] = { 68, 39, 33, 12, 41, 37 };
	char d[] = { 'Y', 'Y', 'N', 'Y', 'Y', 'N'};
	for (i = 0; i < 6; i++){
		printf("c[%d] %p\n", i, c+i);
		printf("d[%d] %p\n", i, d+i);
	}
	return 0;
}