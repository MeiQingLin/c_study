#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int j = 0;
	int m = 0; // 用以统计一行打印多少个了
	for (i = 201; i < 500; i += 2) {
		int s = sqrt(i);
		for (j = 2; j <= s; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (j == s + 1) {
			printf("%-6d", i);
			m += 1;
			if (m % 10 == 0) {
				printf("\n");
			} // 每行输入10个数字后跳行
		}
	}
	return 0;
}
