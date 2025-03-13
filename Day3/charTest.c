#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 대소문자 변환 프로그램 */

int main() {

	char ch1 = ' ';
	char ch2 = ' ';

	printf("대소문자 변환 프로그램\n");
	printf("문자 한 글자를 입력하세요: ");
	scanf("%c", &ch2);

	printf("입력 문자: %c\n", ch2);

	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
		ch1 = ch2 + ('a' - 'A');
		printf("변환 문자: %c", ch1);
	}
	else if ((ch2 >= 'a') && (ch2 <= 'z')) {
		ch1 = ch2 + ('A' - 'a');
		printf("변환 문자: %c", ch1);
	}
	else {
		printf("다시 입력하세요");
	}

	return 0;
}