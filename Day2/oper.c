#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n = 30;
	int res;

	// 컴퓨터 0(false)를 기준으로 사용 
	res = (n > 10) && (n < 20); 
	printf("res: %d\n", res); // 0 = false
	res = (n < 10) || (n > 20); 
	printf("res: %d\n", res); // 1 = true
	res = !(n >= 30); // >= 복합대입연산자 | ! 부정연산자 
	printf("res: %d\n", res); // 0

	res = ~n; // ~ 비트단위 부정연산자
	printf("res: %d\n", res); // -31

	res = n << 1; // 좌시프트 (이동시 오른쪽 빈 자리 0으로 채움)
	printf("res: %x\n", res); // 3c (16진수) 60(10진수)

	res = res >> 1; // 우시프트 (이동시 왼쪽 빈 자리 부호비트로 채움)
	printf("res: %x\n", res); // 1e (16진수) 30(10진수)

	int n2 = 143;		// 0b 1000 1111 

	res = n2 << 1;		// 0b (000)1 0001 1110  
	printf("res: %x\n", res);

	res = n2 >> 1; 		// 0b 0100 0111
	printf("res: %x\n", res); // 47

	// ! int와 char 시프트 연산시 다른 결과 나올 수 있음!!

	return 0;
}

// 부호비트
// 0:양수