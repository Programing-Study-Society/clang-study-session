#include <stdio.h>

// �A�h���X���Q�n���Č�������
void swap(int *num1, int *num2);

int main(void) {

	int x[5] = {5, 1, 9, 2, 4};

	printf("����ւ��O %d : %d\n", x[2], x[3]);
	swap(x + 2, x + 3);
	printf("����ւ��� %d : %d\n", x[2], x[3]);

	return 0;
}

// �ϐ��錾�Ɠ����悤�� �^ *�ϐ� �ŋL�q
void swap(int *num1, int *num2) {
	int tmp = *num1;	// �A�h���X�ɃA�N�Z�X���Ēl���擾
	*num1 = *num2;		// �A�h���X�ɃA�N�Z�X���Ēl����
	*num2 = tmp;
}