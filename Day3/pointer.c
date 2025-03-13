#include <stdio.h>
/* 
   pointer - 주소
   포인터 변수 - 주소를 저장할 수 있는 변수 / 모든 포인터 변수는 4byte!! 
*/
int main() {

	// !! 선언부분에 있는 포인터 -> 의미 X, 포인터 변수임을 알려주는 용도
	//int p; 	    // int타입의 변수 선언
	//int* p;		// int 타입의 포인터 변수 선언 (4byte-주소는 모두 4바이트로 동일)
	//char* pc;   // char타입의 포인터 변수 선언 (4byte)
	//double *pd; // double타입의 포인터 변수 선언
	// * 선언 부분에서 *의 위치는 크게 상관없음

	int num = 100;
	printf("num의 주소: %p\n", &num);
	printf("num의 값: %d\n", num);	
	int* p = &num;										 // 아무의미 없는 표시
	printf("포인터변수 p에 저장된 값(주소): %p\t", p);
	printf("포인터변수 p가 가리키는 곳의 값: %d\n", *p); // * 간접참조 연산자

	num += 1; // 변수로 접근 or 포인터로 접근 -> 비슷함
	printf("num: %d, *p: %d\n", num, *p); // 101, 101
	*p += 1;
	printf("num: %d, *p: %d\n", num, *p); // 102, 102
	// 포인터 사용 자제!



	return 0;
}