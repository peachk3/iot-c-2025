#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 4���� ������ ���� �޾Ƽ� �л��� �հ�, ��� ��� (2���� �迭 ���)

int main() {

	int ary[4][3];
	printf("����, ����, ���� ������ �Է��ϼ���. \n");

	for(int i = 0; i < 4; i++) {
		printf("%d��° �л��� ����, ����, ���� ������ �Է��ϼ���. \n", i+1);
		//scanf("ary: %d", &ary[i]);
		for(int j = 0; j < 3; j++) {
			//gets(ary[i][j]);
			scanf("%d", &ary[i][j]);
		}
	}

	for (int i = 0; i < 4; i++) {
		int sum = 0;
		printf("%d��° �л��� ����: ", i + 1);

		// �� ���� ���� ���
		for (int j = 0; j < 3; j++) {
			printf("%d ", ary[i][j]);
			sum += ary[i][j];  // �հ� ���
		}

		// �հ�� ��� ���
		float average = sum / 3.0;  // ����� �Ǽ������� ���
		printf("�հ�: %d, ���: %.2f\n", sum, average);  // ��� �Ҽ��� ��° �ڸ����� ���
	}

	return 0;
}