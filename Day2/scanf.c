#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int a;
	char ch;

	// 문자 하나를 입력받을시
	/*scanf("%d", &a);
	scanf("%c", &ch);*/
	// 이대로 실행시킬시에는 a를 입력시킨 후에 프로그램이 종료됨!!

	scanf("%d", &a);
	getchar(); // 버퍼에 남아있는 개행문자를 제거하기 위한 getchar() 함수 호출
	scanf("%c", &ch);
	// => 정상 입력 가능

	return 0;
}