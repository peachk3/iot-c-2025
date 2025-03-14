#include <stdio.h>
/*
	이중 포인터
*/
int main() {
	int n = 100;
	int* pn;
	int** ppn;				// 이중 포인터

	pn = &n;				// 변수 n의 주소를 pn에 저장
	ppn = &pn;				// 포인터변수 pn의 주소를 저장하는 이중 포인터

	printf("n: %d\t n 주소: %p\n", n, &n); //n: 100   n 주소: 000000889BFCF6C4
	printf("pn: %p\t pn 주소: %p\t *pn: %d\n", pn, &pn, *pn);
	// pn: 000000889BFCF6C4     pn 주소 : 000000889BFCF6E8       *pn : 100
	printf("ppn: %p\t ppn 주소: %p\t *pnn: %p\t **ppn: %d\n", ppn, &ppn, *ppn, **ppn);
	// ppn: 000000166FF2FC68    ppn 주소: 000000166FF2FC88      *pnn: 000000166FF2FC44   **ppn: 100
	// pn = *ppn
	return 0;
}