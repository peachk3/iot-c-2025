#include <stdio.h>
/*
	pointer - 주소의 크기는 컴퓨터 환경따라 다르다.
	포인터변수의 크기는 타입에 상관없이 일정하다. 왜냐하면 주소의 크기는 일정하기 때문
*/
int main() {

	char ch;
	int n;
	char* pch = &ch;
	int* pn = &n;
	printf("char 주소 크기: %d\t", sizeof(&ch));
	printf("int 주소 크기: %d\n", sizeof(&n));
	printf("char 포인터 크기: %d\t", sizeof(pch));
	printf("int 포인터 크키: %d\n", sizeof(pn));
	// 주소 크기 = 포인터 크키


	// 32bit 컴퓨터에는 4btye까지만 달 수 있음...?
	// 1Kbyte = 1024(2^10)bit / MB = 2^20 / GB = 2^30 / 4GB 2^32 
	// 1kbite = 1024bit (2^10)

	return 0;
}