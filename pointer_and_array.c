#include <stdio.h>

int main(void) {
	// �v�f���T�̔z��
	int x[5] = {5, 4, 3, 2, 1};

	// �A�h���X�̕\��
	printf("x �� �A�h���X : %p\n", x);
	// �v�f�̕\��
	printf("x �� ");
	// x[0] = *(x + 0)
	printf("{ %d", *(x + 0));
	for (int i = 1; i < 5; i++) 
		printf(", %d", *(x + i));
	printf(" }\n");

	return 0;
}
