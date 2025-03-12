#include <stdio.h>
/* 함수
	- 입력과 출력이 없는 함수 
	- 함수 안에서 결과를 나타냄
*/
// 출력 X - void
// 함수 선언
void func(void) {	// 함수 정의 : 함수의 기능을 여기에 작성
	int a = 10, b = 20;

	printf("void func()\n");
	printf("a + b: %d", a + b);
}

int main() {
	
	func(); // 함수 호출 
	return 0;
}