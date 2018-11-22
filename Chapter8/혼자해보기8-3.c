#include<stdio.h>
int SelectSum(int Array[], int Size);
int main(void)
{
	int a[] = { 20, 10, 5, 8, 28 }, Sum;
	Sum = SelectSum(a, 5);
	printf("골라서 더한값은 %d\n", Sum);
	return 0;
}
int SelectSum(int Array[], int Size)
{
	int i, result = 0;
	for (i = 0; i < Size; i++) {
		if (Array[i] > 10) {
			result = result + Array[i];
		}
	}
	return result;
}