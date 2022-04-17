#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	while (*dest++ = *src++) {
		;
	}
	return ret;
}
int main()
{
	char arr2[] = "helloworld";
	char arr1[20] = "xxxxxxxxxxx";
	printf("%s", my_strcpy(arr1, arr2));
	return 0;
}