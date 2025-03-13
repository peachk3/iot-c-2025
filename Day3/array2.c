#include <stdio.h>

int main() {

	int ary[] = { 1, 2, 3 };

	printf("배열의 크기: %d\n", sizeof(ary)); // 12
	printf("배열 방 한 개의 크기: %d\n", sizeof(ary[0])); // 4
	printf("배열의 방 개수: %d\n", sizeof(ary)/ sizeof(ary[0])); // 3
	printf("배열 이름: %p\n", ary); // 배열의 시작 주소
	printf("배열의 첫번째 방 주소: %p\n", &ary[0]);
	printf("배열의 두번째 방 주소: %p\n", ary + 1); // 주소의 다음 방을 가리킴 (4byte 증가됨)
	printf("배열의 두번째 방 주소: %p\n", &ary[1]);

	return 0; 
}