#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	문자
*/

int main() {

	char ch1;
	char ch2;

	scanf(" %c %c", &ch1, &ch2); // %c -> 공백, 개행 등을 포함해서 출력됨! 주의 필요

	printf("[%c%c]", ch1, ch2);

	return 0;
}