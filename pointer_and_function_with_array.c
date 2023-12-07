#include <stdio.h>

void sort(int *arr, int length);

int main(void) {
	int arr[5] = {8, 2, 5, 6, 0};

	printf("並び替え前：");
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");

	// arrにはアドレスが入っている
	sort(arr, 5);

	printf("並び替え後：");
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void sort(int *arr, int length) {
	for (int i = 0; i < length - 1; i++) {
		for (int j = i + 1; j < length; j++) {
			// ポインタだから *()でも[]でも可
			if (*(arr + i) > *(arr + j)) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}