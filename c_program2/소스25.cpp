#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int data = 100;
	int* ptrint;

	ptrint = &data;

	printf("변수형      주소값      저장값\n");
	printf("---------------------------\n");
	printf("   data  %p  %8d\n", &data,data);
	printf("ptrint  %p  %p\n", &ptrint,ptrint);
}