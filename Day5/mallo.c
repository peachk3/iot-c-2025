#include <stdio.h>
#include <stdlib.h> // ������� ����
/*
	���� �޸� �Ҵ� : malloc - free
	calloc - �޸� ���� �Ҵ��Ͽ� 0���� �ʱ�ȭ
	realloc - �޸� ���Ҵ�(ũŰ ����)
*/ 
int main() {

	int* pi = (int*)malloc(sizeof(int)); 	// �� ������ �Է� ũ�⸸ŭ �޸� ���� �Ҵ�޾� �����ּҸ� ����
	if (pi == NULL) {
		printf("�޸� �Ҵ� ����");
		exit(1);
	}
	printf("�Ҵ� ����!");
	
	free(pi); // ���� �޸� ����
	return 0;
}
