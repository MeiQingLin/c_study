#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	printf("��������������:");
	scanf("%d %d", &a, &b);

	int t = 0;
	while (t = a % b) {
		a = b;
		b = t;
	}
	printf("�������������Լ����:%d", b);
	return 0;
}

