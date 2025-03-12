#include <stdio.h>
/* 삼항 연산자 */
int main() {
	int n = 10, n2 = 20;
	int res;

	res = (n > n2) ? n : n2;
	// 조건식 ? 참일때 값 : 거짓일때 값
	printf("res : %d\n", res);


	//printf("n++ : %d\n", n++);   // 단항 연산자 (증감연산자 후위) -> 출력한 후 증가시킴
	//printf("++n2 : %d\n", ++n2); // 증가시키고 출력 (전위)
	//printf("n : %d\n", n); // 11

	res = n++;
	printf("res : %d, n: %d\n", res, n);  // 10, 11

	res = ++n2;
	printf("res : %d, n: %d\n", res, n2); // 21, 21

	return 0;
}