#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数:");
	scanf("%d %d", &a, &b);
	int m = a * b;

	int t = 0;
	while (t = a % b) {
		a = b;
		b = t;
	}

	m = m / b;
	printf("该两个数的最大公约数是:%d\n", b);
	printf("该两个数的最小公倍数是:%d", m);
	return 0;
}

