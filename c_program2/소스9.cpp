#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;

	printf("���� �Է�: ");
	scanf_s("%d", &n);

	if (n % 2)
		printf("Ȧ��");
	else
		printf("¦��");

	//���ǿ�����
	printf("�Դϴ�.\n");
	(n % 2) ? printf("Ȧ��") : printf("¦��");
	printf("�Դϴ�.\n");

	return 0;
}