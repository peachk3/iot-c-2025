#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
	���� 5���� �Է� �޾� ���ڿ��� heap������ ����
*/
int main() {

	char str[5];
	char* ps; // �����Ҵ�� ��� ������ ������ ������
	int i;
	char temp;

	ps = (char*)malloc(strlen(str) + 1);
	if (ps == NULL) {
		exit(1);
	}

	// 5�� �ݺ��ؼ� ���ڸ� �ϳ��� �Է¹���
	for (i = 0; i < 5; i++) {
		printf("���� %d: ", i + 1);
		scanf(" %c", &temp); // ������ �־ ���� �Է� ���۸� ���
		ps[i] = temp; // �Է¹��� ���� �迭�� ����
	}
	// ���ڿ� ���� �� ���� ���� �߰�
	ps[5] = '\0';

	//strcpy(ps, str);
	printf("heap: %s\n", ps);

	free(ps); // ��� ���� ����

	return 0;
}