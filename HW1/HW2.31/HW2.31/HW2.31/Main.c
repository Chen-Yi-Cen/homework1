#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	printf("number	square	cube\n");
	for (i = 0; i <= 10; i++)
	{
		printf("%d	%d	%d\n", i, i * i, i * i * i);
	}
	return 0;
}