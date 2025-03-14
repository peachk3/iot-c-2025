#include <stdio.h>
/*
	문자열
*/
int main() {
	
	char str[100] = "orange";

	printf("%s\n", str); // 배열에 문자가 하나씩 저장됨 / null문자가 저장됨
	printf("%s\n", "orange"); // 문자열 상수
	printf("%p\n", "orange"); // 문자열 상수는 메모리 주소를 가리킴
	printf("%c\n", *"orange"); // 간접 참조 연산자
	printf("%c\n", *("orange" + 1)); // r
	printf("%c\n", "orange"[2]); // a

	//"orange"[0] = 'O'; / 오류 발생
	//*"orange" = 'O'; / 오류 발생
	// => 문자열 상수이기 때문에 수정 불가능

	printf("%s\n", "orange");

	return 0;
}

// 메모리
/*
	Data
		- 힙 : 사용자에게 할당된 메모리 영역
		- 스택 : 지역 변수, 매개변수
		- 데이터 : 전역 변수, 정적 변수(static)
		- 코드 : 문자열 상수, 리터럴
*/