#include<stdio.h>
int main(void)
{
	int kor[3], eng[3], math[3], sum1 = 0, sum2 = 0, sum3 = 0, max = 0, max1 = 0, i, a[3];
	scanf("%d %d %d", &kor[0], &kor[1], &kor[2]);
	scanf("%d %d %d", &eng[0], &eng[1], &eng[2]);
	scanf("%d %d %d", &math[0], &math[1], &math[2]);

	for (i = 0; i < 3; i++) {
		sum1 = sum1 + kor[i];
		sum2 = sum2 + eng[i];
		sum3 = sum3 + math[i];
	}
	printf("���������� ����� %d�Դϴ�.\n���������� ����� %d�Դϴ�.\n���������� ����� %d�Դϴ�.\n", sum1 / 3, sum2 / 3, sum3 / 3);
	
	if (sum1 <= sum2) {
		if (sum2 <= sum3) {
			max = sum3;
		}
		else {
			max = sum2;
		}
	}
	else {
		if (sum1 <= sum3) {
			max = sum3;
		}
		else {
			max = sum1;
		}
	}
	printf("����� ���� ���� ������ ����� %d�Դϴ�.\n", max/3);

	for (i = 0; i < 3; i++) {
		a[i] = kor[i] + eng[i] + math[i];
	}
	printf("ö���� ������ ���� %d�̴�.\n�μ��� ������ ���� %d�̴�.\n������ ������ ���� %d�̴�.\n", a[0], a[1], a[2]);
	
	if (a[0] <= a[1]) {
		if (a[1] <= a[2]) {
			max1 = a[2];
			printf("������ ���� ���� ���� �л��� �����̴�.\n");
		}
		else {
			max1 = a[1];
			printf("������ ���� ���� ���� �л��� �μ��̴�.\n");
		}
	}
	else {
		if (a[0] <= a[2]) {
			max1 = a[2];
			printf("������ ���� ���� ���� �л��� �����̴�.\n");
		}
		else {
			max1 = a[0];
			printf("������ ���� ���� ���� �л��� ö���̴�.\n");
		}
	}
	return 0;
}