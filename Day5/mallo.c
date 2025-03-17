#include <stdio.h>
#include <stdlib.h> // 헤더파일 포함
/*
	동적 메모리 할당 : malloc - free
	calloc - 메모리 동적 할당하여 0으로 초기화
	realloc - 메모리 재할당(크키 조절)
*/ 
int main() {

	int* pi = (int*)malloc(sizeof(int)); 	// 힙 영역에 입력 크기만큼 메모리 공간 할당받아 시작주소를 리턴
	if (pi == NULL) {
		printf("메모리 할당 실패");
		exit(1);
	}
	printf("할당 성공!");
	
	free(pi); // 동적 메모리 해제
	return 0;
}
