#include <stdio.h>

/* 
�߂�l�^ �֐���(�����^ ������, �����^ ������, ...) {
	����������
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

	printf("2�l�̐�Βl�����߂܂�\n");
	scanf("%d%d", &x1, &x2);

	// �֐��ɒl�𑗂��ĕԂ��Ă����l�����Ă���
	int y1 = abs(x1);
	int y2 = abs(x2);

	printf("abs(%d) = %d\n", x1, y1);
	printf("abs(%d) = %d\n", x2, y2);

	return 0;
}