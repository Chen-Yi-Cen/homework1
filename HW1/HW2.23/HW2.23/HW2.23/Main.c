#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c,max,min;
	printf("�п�J�T�Ӿ��:");
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
	printf("�̤j�ȡG%d\n", max);
	printf("�̤p�ȡG%d\n", min);
	return 0;
}