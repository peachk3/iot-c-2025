#include <stdio.h>
/*
	void pointer - 타입이 지정되지 않은 포인터
*/
int main() {

	int n = 10;
	double db = 3.14;

	// int pn = &n;
	// double* pdlb = &db;
	void* p; // 모든 타입을 다 받을 수 있는 포인터

	p = &n;
	printf("*p: %d\n", *(int*)p); // 명시적으로 타입을 선언해줘야 함(형변환)

	p = &db;
	printf("*p: %.1lf\n", *(double*)p); // 

	return 0;
}