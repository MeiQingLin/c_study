#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
// ��Ҫʹ�÷����ݹ������ĸ��������
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* str)
{
	int len = my_strlen(str) - 1;
	char temp = *str;
	*str = *(str + len);
	*(str + len) = '\0';
	if (my_strlen(str) > 1) {
		reverse_string(str + 1);
	}
	*(str + len) = temp;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}
