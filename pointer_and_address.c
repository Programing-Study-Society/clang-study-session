#include <stdio.h>

int main(void) {
	// 数値を入れる変数
	int x = 1;
	// アドレスを取ってくるときは &x
	printf("x → 値 : %d, アドレス : %p\n", x, &x);

	// アドレスを入れるポインタ変数
	int *pointer_x = &x;
	// アドレスを出す場所は %p
	printf("pointer_x → 値 : %d, アドレス : %p\n", *pointer_x, pointer_x);

	// * でアドレスにアクセスして値を代入
	*pointer_x = 2;
	printf("x → 値 : %d, アドレス : %p\n", x, &x);

	return 0;
}

