#include <stdio.h>
/*
	�迭�� ������
*/
int main() {

	int ary[5];
	int* pa = ary; // �迭�̸� = �ּ�! ����, �迭 �տ��� &(�ּҿ�����) ���� �ʿ� XX

	*(pa + 0) = 10;
	printf("*pa: %d, ary[0]: %d\n", *pa, ary[0]);  // 10, 10
	printf("pa: %d\n", pa + 0);
	printf("pa + 1: %d\n", pa + 1); // ���� 4

	*(pa + 1) = 20;
	printf("*(pa + 1): %d, ary[1]: %d\n", *(pa+1), ary[1]); // 20, 20
	printf("pa[0]: %d, pa[1]: %d\n",pa[0], pa[1]); // 10, 20   [ ] == *(  ): �����Ϳ����

	return 0;
}