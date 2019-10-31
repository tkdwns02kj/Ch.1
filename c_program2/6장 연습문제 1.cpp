#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a;

	printf("각도를 입력하시오: ");
	scanf_s("%lf", &a);


	if (a == 0)
	printf("양의 x축 ");
	else if (a == 90)
	printf("양의 y축 ");
	else if (a == 180)
	printf("음의 x축 ");
	else if (a == 270)
	printf("음의 y축 ");
	else if (a == 360)
	printf("양의 x축 ");
	else if (0 < a < 90)
		printf("1사분면입니다. ");
	else if (90 < a < 180)
		printf("2사분면입니다. ");
	else if (180 < a < 270)
		printf("3사분면입니다. ");
	else if (270 < a < 360)
		printf("4사분면입니다. ");
	else
		printf("각도를 잘못 입력하셨습니다. ");

	return 0;
}