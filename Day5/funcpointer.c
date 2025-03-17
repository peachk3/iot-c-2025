#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	함수 포인터 
	- 함수 이름 = 시작 주소
	- 함수 이름 = 포인터
*/
int sum(int, int);
int minus(int, int);
int mul(int, int);
void func(int(*fp)(int, int));

int main() {
	
	// 함수 포인터 선언 (입력이 2개 출력이 1개인)
	//int (*fp)(int, int); 
	int result;
	//result = sum(20, 10);
	//result = minus(20, 10);
	//fp = sum; // 함수 포인터에 함수 이름(주소) 대입
	//result = fp(20, 10); 
	//printf("result: %d\n", result);

	/*printf("연산기호를 입력하세요: ");
	scanf("%s", &fp);*/

	int a = 10, b = 20;

	void func(int(*fp)(int, int));
	//int (*fp)(int, int) = sum;
	//result = fp(a, b);
	printf("결과: %d\n", result);

	return 0;
}

int sum(int a, int b) {
	int result = a + b;
	return result;
}

int minus(int a, int b) {
	int result = a - b;
	return result;
}

int mul(int a, int b) {
	int result = a * b;
	return result;
}

/*
*  두 수, 연산자를 입력받아 계산하는 함수 만들기
*/

void func(int(*fp)(int, int)) {
	printf("숫자 2개를 입력하세요: ");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("입력한 숫자 %d %d\n", a, b);

	//int (*fp)(int, int) = sum;
	//result = fp(a, b);
}