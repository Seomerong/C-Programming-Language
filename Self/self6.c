//1에서100까지 수중 3의 배수와 5의 배수를 모두 더한것/
#include<stdio.h>
int main(void)
{
	int a, b=0;
	for (a = 1; a < 101; a++) {
		if (a % 3 == 0) {
			b = b + a;
		}
		else if (a % 5 == 0) {
			b = b + a;
		}
	}
	printf("%d", b);
	return 0;
}