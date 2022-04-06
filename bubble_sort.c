#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
// 冒泡排序 + 简单优化
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++) {
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			} // 如果一次都没有执行，说明排序已经对了
		}
		if (1 == flag) {
			break;
		}  // 直接结束循环
	}
	
}
int main()
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	// 要求以升序进行排列
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	return 0;
}
