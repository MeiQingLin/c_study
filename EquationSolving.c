#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<math.h>

int main()
{

	printf("�����������һԪ���η��̵Ľ⡣\n");
	printf("�����ֱ�����xƽ����ϵ����x��ϵ�����Լ��������Ӧ������:");

	double a, b, c, d;
	double x = 0;
	double x1 = 0;
	double x2 = 0;
	double t = 0;
	scanf("%lf %lf %lf", &a, &b, &c);

	d = b * b - 4 * a * c;
	t = sqrt(b * b - 4 * a * c);

	if (d < 0) {
		printf("�÷����޽⣡");
		return 0;
	}
	else if (d == 0) {
		x = -b / 2 * a;
		printf("�÷��̵�������ֵ��ȣ������:%lf", x);
		return 0;
	}
	else if (d > 0) {
		x1 = (-b + t) / (2 * a);
		x2 = (-b - t) / (2 * a);
		printf("�÷��̶�Ӧ��������ֱ�Ϊ:%lf %lf", x1, x2);
	}

	return 0;
}