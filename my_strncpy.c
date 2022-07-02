#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//模拟实现库函数strncpy
char* my_strncpy(char* p1, const char* p2, int num)
{
	char* tmp = p1;
	while (num) {
		num--;
		*tmp = *p2;
		if ('\0' == *p2) {
			break;
		}
		tmp++;
		p2++;
	}
	while (num) {
		num--;
		tmp++;
		*tmp = '\0';
	}
	return p1;
}
int main()
{
	char arr1[20] = "abcdef";
	char arr2[6] = "123s";
	char arr3[10] = "abcdef";
	char arr4[6] = "123d";
	my_strncpy(arr1, arr2, 2);
	strncpy(arr3,arr4,2);
	printf("%s\n", arr1);
	printf("%s\n",arr3);
	return 0;
}