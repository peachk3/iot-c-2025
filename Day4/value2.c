#include <stdio.h>
/*
	static - 정적지역변수
*/
void incFunc();
void incFunc2();
// 전역 변수 - 프로그램 전체에서 접근 가능, 프로그램이 종료될때까지 갑 유지
int main() {

	for (int i = 0; i < 5; i++) {
		incFunc();
		incFunc2();
	}
	//scnt++; // 오류 발생! 지역적 특징 -> 외부에서 접근/제어 불가능

	return 0;
}

void incFunc() {
	int cnt = 0; 	// 지역변수 (함수 내에서만 사용 가능)
	// 함수 내에서만 유효, 함수 호출이 끝나면 사라짐
	cnt++;
	printf("cnt: %d\t", cnt); // 계속 1만 나옴
}
void incFunc2() {
	static int scnt;			// 정적지역변수  (선언된 블럭 내에서만 접근/제어 가능) 자동 0 초기화(데이터 영역에 저장)
	// 함수 내에서만 유효, 함수 호출 간의 값 유지, 초기화는 한 번만 이루어짐
	scnt++;
	printf("scnt: %d\n", scnt); // 계속 1증가하면서 나옴
}

int ary[열] = { 1, 2, 3 };
int ary[행][열];