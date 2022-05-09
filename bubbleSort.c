#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>


void swap(char* buf1, char* buf2, int size)
{
	int i = 0;
	for (i = 0; i < size; i++) {
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}


void bubble_sort(void* base, //������Ԫ�ص�ַ
	int num, //����Ԫ�ظ���
	int size, //����Ԫ�ش�С
	int (*cmp)(const void* e1, const void* e2) //����ָ��
)
{
	int i = 0;
	//������num-1��
	for (i = 0; i < num - 1; i++) {
		int j = 0;
		for (j = 0; j < num - 1 - i; j++) {
			//����Ԫ�ؽ��бȽ�
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0) {
				//���н���
				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}


int int_cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}


int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), int_cmp);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d", arr[i]);
	}
	return 0;
}
