#include <stdio.h>

// アドレスを２つ渡して交換する
void swap(int *num1, int *num2);

int main(void) {

	int x[5] = {5, 1, 9, 2, 4};

	printf("入れ替え前 %d : %d\n", x[2], x[3]);
	swap(x + 2, x + 3);
	printf("入れ替え後 %d : %d\n", x[2], x[3]);

	return 0;
}

// 変数宣言と同じように 型 *変数 で記述
void swap(int *num1, int *num2) {
	int tmp = *num1;	// アドレスにアクセスして値を取得
	*num1 = *num2;		// アドレスにアクセスして値を代入
	*num2 = tmp;
}