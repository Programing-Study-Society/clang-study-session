#include <stdio.h>

int main(void) {
	// ���l������ϐ�
	int x = 1;
	// �A�h���X������Ă���Ƃ��� &x
	printf("x �� �l : %d, �A�h���X : %p\n", x, &x);

	// �A�h���X������|�C���^�ϐ�
	int *pointer_x = &x;
	// �A�h���X���o���ꏊ�� %p
	printf("pointer_x �� �l : %d, �A�h���X : %p\n", *pointer_x, pointer_x);

	// * �ŃA�h���X�ɃA�N�Z�X���Ēl����
	*pointer_x = 2;
	printf("x �� �l : %d, �A�h���X : %p\n", x, &x);

	return 0;
}

