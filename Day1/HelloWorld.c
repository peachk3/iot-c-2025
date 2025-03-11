/* #include 헤더파일을 포함해서 파일 생성 */
// .h -> 헤더파일 stdio -> 헤더파일명
#include <stdio.h>		

// 운영체제 -> 메인 함수 자동 호출! => main()함수는 꼭 있어야 함
// int (출력을 나타냄-type) -> 정수형 반환값!! return값을 돌려줌! (to 운영체제)
// 1. 함수 선언
int main() {  // = main(void)         // 함수 - 함수명() 이름 뒤에 괄호가 있으면 무조건 함수!  
	// 2. 함수 정의 {} 안에 작성

	// 3. 함수 호출 - 출력, 중괄호 X
	printf("Hello, World!\n");    // 함수호출 - 함수명(입력-매개변수) 

	return 0; // 출력 - type이 있다면 return 작성 필수!
}

// def function() : => 파이썬 함수 선언

// void -> 출력 X, return 사용 X
void main() {          
	printf("Hello, World!\n");   
}

/* 함수 문법
 1. 함수 선언
 출력(type) 함수명(입력) {
		2. 함수 정의
		3. 함수 호출
		
 	return 출력값;
 } */
