#include <stdio.h>
/*
	getchar, putchar - 문자 전용 함수 (송수신)
*/
int main() {

	int ch;	// int타입 자주 사용 char 사용 가능

	ch = getchar();		// 한문자를 읽어오는 함수 (정수형태로 리턴함!)
	putchar(ch);		// 한문자를 출력하는 함수
	putchar('\n');		// 개행 한 문자!
	
	printf("input: %d\n", ch);

	return 0;
}