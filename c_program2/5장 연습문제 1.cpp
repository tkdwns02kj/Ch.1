#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b;
	printf("�� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d", &a, &b);

	if (a > b)
		printf("�� %d\n������ %d", a / b, a % b);
	else if (a < b)
		printf("�� %d\n������ %d", b / a, b % a);
	else
		printf("������ �����ϴ�. ");

	return 0;

}