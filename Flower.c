#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int i = 0;
	int a = 0; // 储存个位
	int b = 0; // 储存十位
	int c = 0; // 储存百位
	for (i = 100; i < 1000; i++) {
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		int j = a * a * a + b * b * b + c * c * c;
		if (i == j) {
			printf("%d,该数字是水仙花数\n", i);
		}
		else {
			printf("%d,该数字不是水仙花数\n", i);
		}
	}

	return 0;
}
