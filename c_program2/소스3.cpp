#include <stdio.h>

int main(void)
{
	int year = 0;
	printf("����� ���п�����? ");
	scanf_s("%d", &year);
	printf("���п���: %d\n\n", year);

	int month, day;
	printf("����� ���������? ");
	scanf_s("%d - %d - %d", &year, &month, &day);
	printf("�������: %d-%d-%d\n", year, month, day);

	int as, sd, df, fg;
	printf("���� ���� 4���� ���ÿ� ");
	scanf_s("%d, %d, %d, %d", &as, &sd, &df, &fg);
	printf("��: %d", as+ sd+ df+ fg);

	return 0;
}