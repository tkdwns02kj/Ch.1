#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int j, i;

	{
		for (i = 0; i < 4; i++)

			for (j = 0; j < 4; j++)
				if (j + i <= 2)
				{
					printf("%d", j);
				}
				else
					printf("*");
		puts("");

	}

}