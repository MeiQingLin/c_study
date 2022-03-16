#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 编写程序，输入三个双精度数
// 求出它们的平均值并保留此平均数小数点后一位数
// 小数点后第二位四舍五入，最后输出结果
int main()
{
	double a, b, c;
	printf("请输入三个小数:"); // 数据的输出
	scanf("%lf %lf %lf", &a, &b, &c); // 数据的输入

	double average = (a + b + c) / 3; // 运算符优先级，要用括号让加法先执行，求出平均值

	double newAverage = (int)(average * 10 + 0.5) / 10.0; // 强制类型转换

	printf("%lf", newAverage); // 输出结果

}