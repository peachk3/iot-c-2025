#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 계산기 만들기 */
// 추가 예외처리, q입력 시 계산기 종료!

int plus(int, int);
int minus(int a, int b);
int multi(int a, int b);
double div(double a, double b);


int main() {

	while (1) {

		int a = 0;
		int b = 0;
		char oper;

		printf("계산기 프로그램입니다.\n");
		printf("두 개의 정수를 입력하세요.\n");
		scanf_s("%d %d", &a, &b);
		getchar();

		printf("연산자를 입력하세요. (종료는 Q)\n");
		scanf_s("%c", &oper, sizeof(oper));

		//printf("입력 연산자 : %c \n", oper);

		if (oper == '+') {
			int result = plus(a, b);
			printf(" ");
			//return result;
			printf("결과 : %d\n", result);
		}
		else if (oper == '-') {
			int result = minus(a, b);
			printf("결과 : %d\n", result);
		}
		else if (oper == '/') {
			double result = div(a, b);
			printf("결과 : %2f\n", result);
		}
		else if (oper == '*') {
			int result = multi(a, b);
			printf("결과 : %d\n", result);
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
