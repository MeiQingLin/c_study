#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int letter = 0; // ������ĸ
	int space = 0; // ����ո�
	int digit = 0; // ��������
	int other = 0; // ���������ַ�
	printf("������һ���ַ�:");
	char c = 0;
	while ((c = getchar()) != '\n') {
		if (c > 'a' && c < 'z' || c > 'A' && c < 'Z') {
			letter += 1;
		}
		else if (' ' == c) {
			space += 1;
		}
		else if (c > '0' && c < '9') {
			digit += 1;
		}
		else {
			other += 1;
		}
	}
	printf("��ĸ�ĸ�����%d���ո�ĸ�����%d�����ֵĸ�����%d�������ַ��ĸ�����%d", letter, space, digit, other);
	return 0;
}
