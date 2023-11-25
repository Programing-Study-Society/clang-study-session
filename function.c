#include <stdio.h>

// 絶対値を出力する関数
int abs(int num);

int main(void) {

	int x;
	scanf("%d", &x);
	int y = abs(x);
	printf("abs(%d) = %d\n", x, y);

	return 0;
}

// 関数では処理が記述出来る。
int abs(int num) {
	int y;
	if (num >= 0)
		y = num;
	else
		y = -num;
	
	return y;
}