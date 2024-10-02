#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c,max,min;
	printf("請輸入三個整數:");
	scanf_s("%d %d %d", &a,&b,&c);
	if (a >= b && a >= c) {
		max = a;
	}
	else if (b >= a && b >= c) {
		max = b;
	}
	else {
		max = c;
	}
	if (a <= b && a <= c) {
		min = a;
	}
	else if (b <= a && b <= c) {
		min = b;
	}
	else {
		min = c;
	}
	printf("最大值：%d\n", max);
	printf("最小值：%d\n", min);
	return 0;
}