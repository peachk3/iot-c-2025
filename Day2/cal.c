#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* ���� ����� */

int plus(int, int);
int minus(int a, int b);
int multi(int a, int b);
int div(int a, int b);


int main() {

	int a = 0;
	int b = 0;
	char oper;

	printf("���� ���α׷��Դϴ�.\n");
	printf("�� ���� ������ �Է��ϼ���.\n");
	scanf_s("%d %d", &a, &b);
	getchar();

	printf("�����ڸ� �Է��ϼ���.\n");
	scanf_s(" %c", &oper, sizeof(oper));

	//printf("�Է� ������ : %c \n", oper);
	
	if (oper == '+') {
		int result = plus(a, b);
		printf(" ");
		//return result;
		printf("��� : %d ", result);
	}
	else if (oper == '-') {
		int result = minus(a, b);
		printf("��� : %d ", result);
	}
	else if (oper == '/') {
		int result = div(a, b);
		printf("��� : %d", result);
	}
	else if (oper == '*') {
		int result = multi(a, b);
		printf("��� : %d ", result);
	}

	return 0;
}

int plus(int a, int b) {
	int res = a + b;
	return res;
}

int minus(int a, int b) {
	int res = a - b;
	return res;
}

int multi(int a, int b) {
	int res = a * b;
	return res;
}

int div(int a, int b) {
	int res = a / b;
	return res;
}
