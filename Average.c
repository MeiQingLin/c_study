#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// ��д������������˫������
// ������ǵ�ƽ��ֵ��������ƽ����С�����һλ��
// С�����ڶ�λ�������룬���������
int main()
{
	double a, b, c;
	printf("����������С��:"); // ���ݵ����
	scanf("%lf %lf %lf", &a, &b, &c); // ���ݵ�����

	double average = (a + b + c) / 3; // ��������ȼ���Ҫ�������üӷ���ִ�У����ƽ��ֵ

	double newAverage = (int)(average * 10 + 0.5) / 10.0; // ǿ������ת��

	printf("%lf", newAverage); // ������

}