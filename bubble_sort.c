#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
// ð������ + ���Ż�
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
			} // ���һ�ζ�û��ִ�У�˵�������Ѿ�����
		}
		if (1 == flag) {
			break;
		}  // ֱ�ӽ���ѭ��
	}
	
}
int main()
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	// Ҫ���������������
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	return 0;
}
