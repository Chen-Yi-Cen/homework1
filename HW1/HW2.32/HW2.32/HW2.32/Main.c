#include<stdio.h>
#include<stdlib.h>

int main()
{
	float h, w, bmi;
	printf("�п�J�A������(����)");
	scanf_s("%f", &h);
	printf("�п�J�A���魫(����)");
	scanf_s("%f", &w);
	bmi = w / (h * h);
	printf("�A��BMI��%f", bmi);
	return 0;
}