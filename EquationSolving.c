#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<math.h>

int main()
{
	// 该程序用于解一元二次方程
	printf("该设计用于求一元二次方程的解。\n");
	printf("请您分别输入x平方的系数，x的系数，以及常数项对应的数字:");

	double a, b, c, d; // 方程未知数对应的系数
	double x = 0; // 方程的解
	double x1 = 0; // 方程的解
	double x2 = 0; // 方程的解
	double t = 0; // 方程解的判断式
	scanf("%lf %lf %lf", &a, &b, &c);

	d = b * b - 4 * a * c;
	t = sqrt(b * b - 4 * a * c);

	if (d < 0) {
		printf("该方程无解！");
		return 0;
	}
	else if (d == 0) {
		x = -b / 2 * a;
		printf("该方程的两个解值相等！结果是:%lf", x);
		return 0;
	}
	else if (d > 0) {
		x1 = (-b + t) / (2 * a);
		x2 = (-b - t) / (2 * a);
		printf("该方程对应的两个解分别为:%lf %lf", x1, x2);
	}

	return 0;
}