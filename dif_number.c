#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����������Ӧ������λ��ͬ�ĸ���
int number_of1(int n)
{
	int count = 0;
	while (n) {
		n = n & (n - 1);
		count++;
	}
	return count;
}
// ������򣬶�Ӧ�Ķ�����λ��ͬΪ0������Ϊ1
// ��ʹ���������λ1�ĸ����ĺ���
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