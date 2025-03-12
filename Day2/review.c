#define _CRT_SECURE_NO_WARNINGS // 코드 최상단에 적어야 scanf 오류 사라짐!
#include <stdio.h>

int main() {
	char str[20];
	int age;

	printf("나이를 입력하세요: ");
	scanf("%d", &age); // & 주소연산자 사용
	// scanf_s : 입력 후 개행 문자 없음
	//	- 버퍼 크기를 명시해야 함 => 오버플로우 방지
	//	-> 문자열을 받을 때 버퍼 크기를 두 번째 인자로 전달해야 함
	
	// scanf : 입력 후 개행 문자 있음
	//	- 입력을 받을 때 버퍼 크기를 지정하지 않으면 오버플로우 발생 가능성 O

	printf("이름을 입력하세요: ");
	scanf_s("%s", str, sizeof(str)); // 배열이름 자체가 주소이므로 & 사용하지 않음
	// scanf 입력 버퍼에 있는 내용을 str에 가져옴 + 입력 후 개행 문자 있음

	printf("당신의 나이는 %d살이고 이름은 %s입니다. \n", age, str);

	return 0;
}

// 연산자
//A && B // 논리 연산자 -> A와 B가 모두 참일 때 참
//A & B // 비트 연산자 
//A || B // 논리 연산자 -> A와 B 중 하나라도 참이면 참
//A | B // 비트 연산자