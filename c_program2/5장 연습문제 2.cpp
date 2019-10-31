#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a;
	printf("파운드로 변환할 kg을 입력하시오 : ");
	scanf_s("%lf", &a);
	printf("%.3lf파운드", 0.453592*a);

	return 0;
}