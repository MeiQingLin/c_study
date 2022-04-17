#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求两个数对应二进制位不同的个数
int number_of1(int n)
{
	int count = 0;
	while (n) {
		n = n & (n - 1);
		count++;
	}
	return count;
}
// 利用异或，对应的二进制位相同为0，相异为1
// 再使用求二进制位1的个数的函数
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int a = m ^ n;
	int b = number_of1(a);
	printf("%d", b);
	return 0;
}