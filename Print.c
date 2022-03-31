#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
// 将输入数字的每一位打印出来，主要使用了递归
void print(int a)
{
	if (a > 9) {
		print(a / 10);
	}
	printf("%d ", a % 10);
}
int main()
{
	int m = 0;
	scanf("%d", &m);
	print(m);
	return 0;
}

