#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
	struct(구조체) - 사용자 정의 자료형
	기존 자료형을 묶어서 만든 복합 자료형(타입)
*/
// 메모리 공간에 할당 X 
struct Human {				// 구조체 선언 (struct 구조체형{};)
	char name[100];			// 멤버변수
	int age;				// 멤버변수
};

int main() {

	/* . -> 멤버 접근 연산자 */
	struct Human h;			// Human 구조체의 변수 h 선언 (struct Human은 자료형!)
							// 변수 선언 => 메모리 공간에 할당
	h.age = 27;		// h객체의 멤버 age에 30을 저장
	//h.name = "park dogyoung"; // 오류 발생 -> 상수 = 상수!!
	strcpy(h.name, "park dogyoung");

	/* char str2[100];
	str2[1] = 'p';
	str2[2] = 'a';
	...
		str[마지막] = '\0'; // 공백 문자
	=> 입력 가능해짐 */

	//char str[100] = "park dogyoung";
	//printf("%s\n", str);

	//char str2[100];
	//str2 = "peach K"; // 오류 발생 -> 상수 = 상수!! / 변수 = 상수 가능

	printf("나의 이름은 %s이고, 나이는 %d입니다.", h.name, h.age);

	return 0;
}