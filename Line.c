#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int letter = 0; // 储存字母
	int space = 0; // 储存空格
	int digit = 0; // 储存数字
	int other = 0; // 储存其他字符
	printf("请输入一行字符:");
	char c = 0;
	while ((c = getchar()) != '\n') {
		if (c > 'a' && c < 'z' || c > 'A' && c < 'Z') {
			letter += 1;
		}
		else if (' ' == c) {
			space += 1;
		}
		else if (c > '0' && c < '9') {
			digit += 1;
		}
		else {
			other += 1;
		}
	}
	printf("字母的个数是%d，空格的个数是%d，数字的个数是%d，其他字符的个数是%d", letter, space, digit, other);
	return 0;
}
