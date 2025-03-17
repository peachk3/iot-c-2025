#include <stdio.h>
#include <stdlib.h>

int main() {

	// main 안에 선언 -> 지역변수 -> 스택 영역
	char str[100]; // 스택에 100개의 문자열 입력하는 공간을 할당함
	char* ps;

	printf("문자열을 입력하세요 > ");
	gets(str);
	printf("입력한 문자열: %s\n", str);

	/*문자열 저장*/
	ps = (char*)malloc(strlen(str) + 1); // 입력된 문자열을 저장할 공간을 힙으로부터 할당 받음 - (문자열 길이 + 1(null 문자))
	if (ps == NULL) {
		exit(1); // 할당받지 못함 -> 종료 시킴
	}

	strcpy(ps, str);	// 문자열 복사
	printf("heap 영역에 입력: %s\n", ps);

	free(ps);	// 동적 메모리 반환

	return 0;
}