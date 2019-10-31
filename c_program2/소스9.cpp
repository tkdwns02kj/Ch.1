#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;

	printf("정수 입력: ");
	scanf_s("%d", &n);

	if (n % 2)
		printf("홀수");
	else
		printf("짝수");

	//조건연산자
	printf("입니다.\n");
	(n % 2) ? printf("홀수") : printf("짝수");
	printf("입니다.\n");

	return 0;
}