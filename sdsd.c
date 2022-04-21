#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char arr[3][20] = { 0 };
	char string[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++) {
		gets(arr[i]);
	}
	if (strcmp(arr[0], arr[1]) > 0) {
		strcpy(string, arr[0]);
	}
	else {
		strcpy(string, arr[1]);
	}
	if (strcmp(arr[2], string) > 0) {
		strcpy(string, arr[2]);
	}
	printf("%s", string);
	return 0;
}