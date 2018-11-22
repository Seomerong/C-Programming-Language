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
	printf("국어점수의 평균은 %d입니다.\n영어점수의 평균은 %d입니다.\n수학점수의 평균은 %d입니다.\n", sum1 / 3, sum2 / 3, sum3 / 3);
	
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
	printf("평균이 가장 높은 과목의 평균은 %d입니다.\n", max/3);

	for (i = 0; i < 3; i++) {
		a[i] = kor[i] + eng[i] + math[i];
	}
	printf("철수의 점수의 합은 %d이다.\n민수의 점수의 합은 %d이다.\n영희의 점수의 합은 %d이다.\n", a[0], a[1], a[2]);
	
	if (a[0] <= a[1]) {
		if (a[1] <= a[2]) {
			max1 = a[2];
			printf("점수의 합이 가장 높은 학생은 영희이다.\n");
		}
		else {
			max1 = a[1];
			printf("점수의 합이 가장 높은 학생은 민수이다.\n");
		}
	}
	else {
		if (a[0] <= a[2]) {
			max1 = a[2];
			printf("점수의 합이 가장 높은 학생은 영희이다.\n");
		}
		else {
			max1 = a[0];
			printf("점수의 합이 가장 높은 학생은 철수이다.\n");
		}
	}
	return 0;
}