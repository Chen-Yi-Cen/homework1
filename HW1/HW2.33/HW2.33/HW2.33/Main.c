#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a, b, c, d, e,total;
	printf("一整天的總里程數:");
	scanf_s("%f", &a);
	printf("汽油一公斤多少錢:");
	scanf_s("%f", &b);
	printf("平均一公斤能行駛多少公里:");
	scanf_s("%f", &c);
	printf("一天的停車費:");
	scanf_s("%f", &d);
	printf("一天的通行費:");
	scanf_s("%f", &e);
	total = (a / c) * b + d + e;
	printf("一天開車花費:%0.2f", total);
	return 0;
}