#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &a);


	if (a == 0)
	printf("���� x�� ");
	else if (a == 90)
	printf("���� y�� ");
	else if (a == 180)
	printf("���� x�� ");
	else if (a == 270)
	printf("���� y�� ");
	else if (a == 360)
	printf("���� x�� ");
	else if (0 < a < 90)
		printf("1��и��Դϴ�. ");
	else if (90 < a < 180)
		printf("2��и��Դϴ�. ");
	else if (180 < a < 270)
		printf("3��и��Դϴ�. ");
	else if (270 < a < 360)
		printf("4��и��Դϴ�. ");
	else
		printf("������ �߸� �Է��ϼ̽��ϴ�. ");

	return 0;
}