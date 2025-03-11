// 변수 - 뭔가를 저장할 수 있는 공간 (RAM에 저장할 공간 할당 받음)
// 변수명 X -> 주소를 통해 메모리에 접근해야 함
// 메모리
// ROM - Read Only Memory (단순 저장 매체)
// RAM - Random Access Memory (읽고 쓰기가 가능한 메모리)

// int - 정수 (4바이트)
// char - 문자 (1바이트)

/* 변수 선언 */
#include <stdio.h>

int main() 
{	
	int num;		// 자료형(크기) 변수명;	
	num = 10;		// 변수명 = 값; (C언어 변수 선언)  /변수 = 리터럴(상수)
	
	// num = 10;	// 파이썬 변수 선언
	int num2 = 10;  // 변수 초기화

	num = num2; // lv에 변수, rv에 변수
	//100 = num; // 에러 lv에는 변수만 들어갈 수 있음
	// 들어갈 수 있는 값!!
	// lv -> 변수 =(대입연산자) rv -> 리터럴/변수

	char ch = 'A'; // 문자형 변수 선언
	double db = 3.14; // 실수형 변수 선언 (double - 좀 더 정확하게 소수점 표현)

	printf("num의 값: %d\n", num);
	printf("num2의 값: %d\n", num2);
	printf("ch의 값: %c\n", ch);
	printf("db의 값: %f\n", db);

	return 0;
}