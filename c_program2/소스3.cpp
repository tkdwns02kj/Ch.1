#include <stdio.h>

int main(void)
{
	int year = 0;
	printf("당신의 입학연도는? ");
	scanf_s("%d", &year);
	printf("입학연도: %d\n\n", year);

	int month, day;
	printf("당신의 생년월일은? ");
	scanf_s("%d - %d - %d", &year, &month, &day);
	printf("생년월일: %d-%d-%d\n", year, month, day);

	int as, sd, df, fg;
	printf("합할 정수 4개를 쓰시오 ");
	scanf_s("%d, %d, %d, %d", &as, &sd, &df, &fg);
	printf("합: %d", as+ sd+ df+ fg);

	return 0;
}