#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	printf("��������������:");
	scanf("%d %d", &a, &b);
	int m = a * b;

	int t = 0;
	while (t = a % b) {
		a = b;
		b = t;
	}

	m = m / b;
	printf("�������������Լ����:%d\n", b);
	printf("������������С��������:%d", m);
	return 0;
}

