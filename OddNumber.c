#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<string.h>

int main()
{

	// �ж�1~100�ڵ�һЩ�����Ƿ�����

	int a = 0; // ���������
	printf("������һ��1~100֮�������:");
	scanf("%d", &a);

	if (a < 1 || a > 100) {
		printf("����������ֲ���1~100֮������֣�\n");
		return 0;
	}

	// �ж��Ƿ��ܱ�2����

	if (a % 2 != 0) {
		printf("������Ϊ����\n");
	}
	else {
		printf("�����ֲ�������\n");
	}

	return 0;
}