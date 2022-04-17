#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
size_t my_strlen(char* str)
{
	assert(str);
	char* ret = str;
	while (*ret++) {
		;
	}
	return ret - str - 1;
}
int main()
{
	char arr1[] = "helloworld";	
	printf("%zd", my_strlen(arr1));
	return 0;
}