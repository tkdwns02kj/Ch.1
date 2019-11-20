#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int j, i;

	for (i = 0; i < 4; i++)
	{
		for (j = 4; j > 0; j--)
			if (j > i + 1)
			{
				printf(" ");
			}
			else
				printf("*");
	puts("");
	}
	
}