#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a, b;
	int ac;
	
	printf("�� �Ǽ� �Է�: ");
	scanf_s("%lf %lf", &a, &b);
	printf("�������� ��ȣ ���� 1(+), 2(-), 3(*), 4(/): ");
	scanf_s("%d", &ac);
	
		if (ac == 1)
			printf("%.2lf + %.2lf = %.2lf", a, b, a + b);
		else if (ac == 2)
			printf("%.2lf - %.2lf = %.2lf", a, b, a - b);
		else if (ac == 3)
			printf("%.2lf * %.2lf = %.2lf", a, b, a * b);
		else if (ac == 4)
			printf("%.2lf / %.2lf = %.2lf", a, b, a / b);
		else
			printf("��ȣ�� �߸� �Է��ϼ̽��ϴ� ");
	
}