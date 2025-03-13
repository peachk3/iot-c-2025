#include <stdio.h>
/*
	배열과 포인터
*/
int main() {

	int ary[5];
	int* pa = ary; // 배열이름 = 주소! 따라서, 배열 앞에는 &(주소연산자) 붙일 필요 XX

	*(pa + 0) = 10;
	printf("*pa: %d, ary[0]: %d\n", *pa, ary[0]);  // 10, 10
	printf("pa: %d\n", pa + 0);
	printf("pa + 1: %d\n", pa + 1); // 차는 4

	*(pa + 1) = 20;
	printf("*(pa + 1): %d, ary[1]: %d\n", *(pa+1), ary[1]); // 20, 20
	printf("pa[0]: %d, pa[1]: %d\n",pa[0], pa[1]); // 10, 20   [ ] == *(  ): 포인터연산식

	return 0;
}