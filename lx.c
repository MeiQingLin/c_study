#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main()
{
	int line = 0;
	scanf("%d", &line); // 7
	int i = 0;
	for (i = 0; i < line; i++) {
		int j = 0;
		for (j = 0; j < line - i - 1; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++) {
		int j = 0;
		for (j = 0; j < i + 1; j++) {
			printf(" ");
		}
		for (j = 0; j < (line - i - 1) * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}