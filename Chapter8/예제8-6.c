#include<stdio.h>

int SumArray(int Array[], int Size);
int main(void)
{
	int a[] = { 10, 5, 15, 25, 7 };
	int Sum;
	Sum = SumArray(a, 5);
	printf("�迭 ������ ��: %d\n", Sum);
	return 0;
}

int SumArray(int Array[], int Size)
{
	int result = 0, i;
	for (i = 0; i < Size; i++)
		result += Array[i];
	return result;
}