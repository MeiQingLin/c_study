#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	double score = 0;
	printf("���������ķ���:");
	scanf("%lf", &score);
	if (score > 100 || score < 0) {
		printf("����������ݲ�����Ҫ��!");
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
		printf("���ĳɼ��ȼ���:%c", grade);
	}
	return 0;
}

