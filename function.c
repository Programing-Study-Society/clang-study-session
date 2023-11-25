#include <stdio.h>

/*
	プログラムの頭で作成する関数の宣言をしておく
	→どういう関数が実装されているか分かりやすくする為

	書き方：
		戻り値の型 関数名(引数1の型 引数1の変数, 引数2の型 引数2の変数 ...);
*/

// 絶対値を出力する関数
int abs(int num);

int main(void) {

	int x1, x2;

	printf("2値の絶対値を求めます\n");
	scanf("%d%d", &x1, &x2);

	int y1 = abs(x1);
	int y2 = abs(x2);

	printf("abs(%d) = %d\n", x1, y1);
	printf("abs(%d) = %d\n", x2, y2);

	return 0;
}


/*
	下で関数の処理を書いていく
	→頭で書くとmainが見づらく煩雑になるため。

	書き方：
		戻り値の型 関数名(引数1の型 引数1の変数, 引数2の型 引数2の変数 ...) {
			処理
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