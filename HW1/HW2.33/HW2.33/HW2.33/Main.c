#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a, b, c, d, e,total;
	printf("�@��Ѫ��`���{��:");
	scanf_s("%f", &a);
	printf("�T�o�@����h�ֿ�:");
	scanf_s("%f", &b);
	printf("�����@������p�h�֤���:");
	scanf_s("%f", &c);
	printf("�@�Ѫ������O:");
	scanf_s("%f", &d);
	printf("�@�Ѫ��q��O:");
	scanf_s("%f", &e);
	total = (a / c) * b + d + e;
	printf("�@�Ѷ}����O:%0.2f", total);
	return 0;
}