#include <stdio.h>

#define MAX 10

int main(void)
{
	int n = 1;


	while (n <= MAX)
	{
		if (n % 2 == 1)

		printf("%d\n", n);

		n = n + 1;
	}
}