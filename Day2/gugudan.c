#include <stdio.h>

int main() {
	
	int dan = 0;
	// �Է¹��� �� ������ ����ϱ�
	printf("�������� Ȯ���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &dan);
	printf("%d�� ����\n", dan);
	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}

	// ������ ����ϱ�
	for (int i = 2; i < 10; i++) {
			printf("%d�� ���� \n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
			printf("\n");
	}
}