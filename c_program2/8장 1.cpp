#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char a = '*';

	char *b = &a;


	printf("���� a�� �ּ� = %u, �ڵ�(ASCII)�� = %d, ���� = %c\n", b, *b, *b);

	return 0;

}