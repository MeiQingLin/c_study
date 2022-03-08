#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	for (int i = 1; i <= 100; i++) {
		if (i % 2 != 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}