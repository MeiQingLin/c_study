#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	int j = 0;
	int array[3][3] = { {100, 200, 300}, {400, 500, 600}, {700, 800, 900} };
	printf("÷√ªª∫Ûµƒæÿ’Û «\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < i; j++) {
			int tmp = array[i][j];
			array[i][j] = array[j][i];
			array[j][i] = tmp;
		}
	}
	for (i = 0; i < 3;i++) {
		for (j = 0; j < 3;j++) {
			printf("%7d", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}