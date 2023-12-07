#include <stdio.h>

#define ARRAY_LENGTH 5

// �z��̗v�f������
void show_array(int arr[], int len){
	printf("{ %d", arr[0]);
	for (int i = 1; i < len; i++)
		printf(", %d", arr[i]);
	printf(" }\n");
}

// ���ёւ��i�I���\�[�g�j
void select_sort(int arr[], int len){
	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				 arr[i] = arr[j];
				 arr[j] = tmp;
			}
		}
	}
}

// ����ւ�
void swap(int arr[], int idx1, int idx2) {
	int tmp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = tmp;
}


int main(void) {
	int arr[ARRAY_LENGTH] = {5, 1, 9, 2, 4};
	
	printf("���ёւ��O : ");
	show_array(arr, ARRAY_LENGTH);

	select_sort(arr, ARRAY_LENGTH);

	printf("���ёւ��� : ");
	show_array(arr, ARRAY_LENGTH);
}

