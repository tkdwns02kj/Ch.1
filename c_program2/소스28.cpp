#include <stdio.h>

int main(void)
{
	int m = 100, n = 200, dunmy;
	printf("%d %d\n", m, n);

	int* p = &m;
	dunmy = *p;
	*p = n;
	p = &n;
	*p = dunmy;
	printf("%d %d\n", m, n);
}