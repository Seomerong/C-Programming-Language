#include<stdio.h>
int Sumeven(int Array[], int Size);
int main(void)
{
	int a[10] = {}, i, Sum;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	Sum = Sumeven(a, 10);
	printf("%d\n", Sum);

	return 0;
}
int Sumeven(int Array[], int Size)
{
	int sum=0, i;
	for (i = 0; i < Size; i++) {
		if (Array[i] % 2 == 0) {
			sum = sum + Array[i];
		}
	}
	return sum;
}