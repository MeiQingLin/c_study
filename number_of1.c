#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// ��һ�����ֵĶ�����1�ĸ���
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
// �˷��������������ģ�ȴ������������
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
//�˷������������Կ��У����ǻ��и��򵥵ķ���
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