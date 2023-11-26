#include <stdio.h>


// 配列の要素を見る
void show_array(int arr[], int len);

// 配列の指定されたインデックス番号の要素を入れ替る
void array_swap(int *arr, int idx_1, int idx_2);


int main(void) {

	int x[5] = {5, 1, 9, 2, 4};

	printf("入れ替え前 x : "); show_array(x, 5);
	array_swap(x, 1, 4);
	printf("入れ替え後 x : "); show_array(x, 5);

	return 0;
}


// arr[]はアドレスを受け取っているのと同じ
void show_array(int arr[], int len) {
	printf("{ %d", *(arr + 0));		// アドレスからアクセス
	for (int i = 1; i < len; i++)
		printf(", %d", *(arr + i));
	printf(" }\n");
}


// アドレスと入れ替えたいインデックス番号を受け取る
void array_swap(int *arr, int idx_1, int idx_2) {
	int tmp = *(arr + idx_1);			// アドレスからアクセス
	*(arr + idx_1) = *(arr + idx_2);
	*(arr + idx_2) = tmp;
}