#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a;
	printf("�Ŀ��� ��ȯ�� kg�� �Է��Ͻÿ� : ");
	scanf_s("%lf", &a);
	printf("%.3lf�Ŀ��", 0.453592*a);

	return 0;
}