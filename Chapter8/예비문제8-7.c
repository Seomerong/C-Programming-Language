#include<stdio.h>
int FindMin(int Array[], int Size);
int main(void)
{
	int Min;
	int a[] = {3, 2, 30, 22, 11};
	Min = FindMin(a, 5);
	printf("%d", Min);
	return 0;
}
int FindMin(int Array[], int Size)
{
	int i, min = Array[0];
	for (i = 0; i < Size-2; i++) {
		if (min >= Array[i]) {
			min = Array[i];
		}
		else {
			min = min;
		}
	}
	return min;
}