#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int month;

	printf("�⵵�� ��(month)�� �Է�: ");
	scanf_s("%d", &month);

	if (month == 4 ||month == 5)
		printf("%d���� ���Դϴ�.\n", month);

	else if (month == 6 || month == 7 || month == 8)
		printf("%d���� �����Դϴ�.\n", month);
	
	else if (month == 9 || month == 10 || month == 11)
		printf("%d���� �����Դϴ�.\n", month);

	else if (month == 12 || month == 1 || month == 2 || month == 3)
		printf("%d���� �ܿ��Դϴ�.\n", month);
	else
		printf("��(month)�� �߸� �Է��ϼ̽��ϴ�.\n");
	

	return 0;
}