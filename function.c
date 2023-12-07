#include <stdio.h>

/* 
戻り値型 関数名(引数型 引数名, 引数型 引数名, ...) {
	処理を書く
}
*/
int abs(int num) {
	int y;
	if (num >= 0)
		y = num;
	else
		y = -num;
	
	return y;
}


int main(void) {

	int x1, x2;

	printf("2値の絶対値を求めます\n");
	scanf("%d%d", &x1, &x2);

	// 関数に値を送って返ってきた値を入れている
	int y1 = abs(x1);
	int y2 = abs(x2);

	printf("abs(%d) = %d\n", x1, y1);
	printf("abs(%d) = %d\n", x2, y2);

	return 0;
}