#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int i = 0;
	int a = 0; // �����λ
	int b = 0; // ����ʮλ
	int c = 0; // �����λ
	for (i = 100; i < 1000; i++) {
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		int j = a * a * a + b * b * b + c * c * c;
		if (i == j) {
			printf("%d,��������ˮ�ɻ���\n", i);
		}
		else {
			printf("%d,�����ֲ���ˮ�ɻ���\n", i);
		}
	}

	return 0;
}
