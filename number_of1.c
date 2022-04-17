#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 求一个数字的二进制1的个数
/*
int number_of1(int n)
{
	int count = 0;
	while (n) {
		if (n % 2 == 1) {
			count++;
		}
		n = n / 2;
	}
	return count;
}
*/
// 此方法可以求正数的，却不可以求负数的
/*
int number_of1(int n)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++) {
		if ((n >> i & 1) == 1) {
			count++;
		}
	}
	return count;
}
*/
//此方法正数负数皆可行，但是还有更简单的方法
int number_of1(int n)
{
	int count = 0;
	while (n) {
		n = n & n - 1;
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d", number_of1(a));
	return 0;
}