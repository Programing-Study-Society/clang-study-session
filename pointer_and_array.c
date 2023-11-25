#include <stdio.h>

int main(void) {
	// 要素数５の配列
	int x[5] = {5, 4, 3, 2, 1};

	// アドレスの表示
	printf("x → アドレス : %p\n", x);
	// 要素の表示
	printf("x → ");
	printf("{ %d", *(x + 0));
	for (int i = 1; i < 5; i++) 
		printf(", %d", *(x + i));
	printf(" }\n");

	return 0;
}