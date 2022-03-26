#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	double score = 0;
	printf("请输入您的分数:");
	scanf("%lf", &score);
	if (score > 100 || score < 0) {
		printf("您输入的数据不符合要求!");
	}else{
		int score1 = score / 10;
		char grade = 'E';
		switch (score1) {
		case 9: case 10:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		}
		printf("您的成绩等级是:%c", grade);
	}
	return 0;
}

