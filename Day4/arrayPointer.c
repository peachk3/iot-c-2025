#include <stdio.h>
/*
	배열 포인터 : 포인터
*/

int main() {

/*	int a = 10;
	int* pa = &a; 

	int ary[] = { 1, 2, 3 };
	int(*pary) = ary*/; // 배열을 가리키는 포인터!! () 생략은 가능함
	// 1차원 배열, 일반 변수를 가리키는 포인터는 달라야 함!

	int ary[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };	// 2차원 배열
	// int** pary = ary; -> 이중포인터
	// 2차원 배열 -> 열이 중요!!
	int (*pary)[4];
	pary = ary;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %d", pary[i][j]);
		}
		printf("\n");
	}
	return 0;
}
/*
	int(* pary)[4];		// int형 변수 4개의 배열을 가리키는 배열 포인터

	int* pary[4]; 	    // 포인터 배열

*/