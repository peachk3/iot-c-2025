#include <stdio.h>
// ���� �Է� �޾Ƽ� �հ� -> ����

int main() {

	int score[5] = { 0, 0, 0, 0, 0 };
	int size = sizeof(score) / sizeof(score[0]);
	int sum = 0;
	int avg = 0;

	printf("������ �Է��ϼ���: ");
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &score[i]);+
		printf("���� : %d\t", score[i]);
		sum += score[i];
		avg = sum / size;
	}
		printf("\n");
		printf("�� : %d\n", sum);
		printf("��� : %d\n", avg);

	return 0;
}