#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* ���� ����� */
// �߰� ����ó��, q�Է� �� ���� ����!

int plus(int, int);
int minus(int a, int b);
int multi(int a, int b);
double div(double a, double b);


int main() {

	while (1) {

		int a = 0;
		int b = 0;
		char oper;

		printf("���� ���α׷��Դϴ�.\n");
		printf("�� ���� ������ �Է��ϼ���.\n");
		scanf_s("%d %d", &a, &b);
		getchar();

		printf("�����ڸ� �Է��ϼ���. (����� Q)\n");
		scanf_s("%c", &oper, sizeof(oper));

		//printf("�Է� ������ : %c \n", oper);

		if (oper == '+') {
			int result = plus(a, b);
			printf(" ");
			//return result;
			printf("��� : %d\n", result);
		}
		else if (oper == '-') {
			int result = minus(a, b);
			printf("��� : %d\n", result);
		}
		else if (oper == '/') {
			double result = div(a, b);
			printf("��� : %2f\n", result);
		}
		else if (oper == '*') {
			int result = multi(a, b);
			printf("��� : %d\n", result);
		}
		else if (oper == 'Q') {
			break;
		}
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

double div(double a, double b) {
	double res = a / b;
	return res;
}
