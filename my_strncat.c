#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//模拟实现库函数strncat

char* my_strncat(char*  p1, const char* p2, int num)
{
	char* tmp = p1;
	while (*tmp) {
		tmp++;
	}
	while (num--) {
		*tmp = *p2;
		if ('\0' == *p2) {
			return p1;
		}
		tmp++;
		p2++;
	}
	*tmp = '\0';
	return p1;
}
int main()
{
	char s1[20] = "abc";
	char s2[20] = "def";
	my_strncat(s1,s2,5);
	printf("%s",s1);
	return 0;
}