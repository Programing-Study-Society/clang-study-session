#include <stdio.h>

// 大きい値を出力する関数
int print_max(int a, int b);

int main(void) {

	int a = 4, b = 2;

	printf("%d : %d\n", a, b);
	print_max(a, b);

	return 0;
}

int print_max(int a, int b) {
	int max;
	if (a > b) {
		max = a;
	}
	else {
		max = b;
	}
	printf("max : %d\n", max);
	return max;
}