#include <stdio.h>

#define ARRAY_LENGTH 5

// 配列の要素を見る
void show_array(int arr[], int len){
	printf("{ %d", arr[0]);
	for (int i = 1; i < len; i++)
		printf(", %d", arr[i]);
	printf(" }\n");
}

// 並び替え（選択ソート）
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

// 入れ替え
void swap(int arr[], int idx1, int idx2) {
	int tmp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = tmp;
}


int main(void) {
	int arr[ARRAY_LENGTH] = {5, 1, 9, 2, 4};
	
	printf("並び替え前 : ");
	show_array(arr, ARRAY_LENGTH);

	select_sort(arr, ARRAY_LENGTH);

	printf("並び替え後 : ");
	show_array(arr, ARRAY_LENGTH);
}

