#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a1 = 10;
	int a2 = 20;
	int sum = 0;

	int* p = &a1;
	*p = 100;
	sum += *p;

	p = &a2;
	*p = 200;
	sum += *p;

	printf("sumÀÇ °ª = %d\n", sum);

	return 0;
}