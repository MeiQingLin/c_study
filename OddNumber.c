#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<string.h>

int main()
{

	// 判断1~100内的一些数字是否奇数

	int a = 0; // 输入的数字
	printf("请输入一个1~100之间的数字:");
	scanf("%d", &a);

	if (a < 1 || a > 100) {
		printf("您输入的数字不是1~100之间的数字！\n");
		return 0;
	}

	// 判断是否能被2整除

	if (a % 2 != 0) {
		printf("该数字为奇数\n");
	}
	else {
		printf("该数字不是奇数\n");
	}

	return 0;
}