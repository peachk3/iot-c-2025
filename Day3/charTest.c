#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* ��ҹ��� ��ȯ ���α׷� */

int main() {

	char ch1 = ' ';
	char ch2 = ' ';

	printf("��ҹ��� ��ȯ ���α׷�\n");
	printf("���� �� ���ڸ� �Է��ϼ���: ");
	scanf("%c", &ch2);

	printf("�Է� ����: %c\n", ch2);

	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
		ch1 = ch2 + ('a' - 'A');
		printf("��ȯ ����: %c", ch1);
	}
	else if ((ch2 >= 'a') && (ch2 <= 'z')) {
		ch1 = ch2 + ('A' - 'a');
		printf("��ȯ ����: %c", ch1);
	}
	else {
		printf("�ٽ� �Է��ϼ���");
	}

	return 0;
}