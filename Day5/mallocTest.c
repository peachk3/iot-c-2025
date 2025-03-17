#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
	문자 5개를 입력 받아 문자열을 heap영역에 저장
*/
int main() {

	char str[5];
	char* ps; // 동적할당된 기억 공간을 연결할 포인터
	int i;
	char temp;

	ps = (char*)malloc(strlen(str) + 1);
	if (ps == NULL) {
		exit(1);
	}

	// 5번 반복해서 문자를 하나씩 입력받음
	for (i = 0; i < 5; i++) {
		printf("문자 %d: ", i + 1);
		scanf(" %c", &temp); // 공백을 넣어서 이전 입력 버퍼를 비움
		ps[i] = temp; // 입력받은 문자 배열에 저장
	}
	// 문자열 끝에 널 종료 문자 추가
	ps[5] = '\0';

	//strcpy(ps, str);
	printf("heap: %s\n", ps);

	free(ps); // 기억 공간 해제

	return 0;
}