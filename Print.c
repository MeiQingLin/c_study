#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
// ���������ֵ�ÿһλ��ӡ��������Ҫʹ���˵ݹ�
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

