#include<stdio.h>
#include<stdlib.h>

int main()
{
	float h, w, bmi;
	printf("請輸入你的身高(公尺)");
	scanf_s("%f", &h);
	printf("請輸入你的體重(公斤)");
	scanf_s("%f", &w);
	bmi = w / (h * h);
	printf("你的BMI為%f", bmi);
	return 0;
}