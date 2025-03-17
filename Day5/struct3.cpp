#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mystruct {
	char name[20];
	int age;
	double height;
	char* str;
};

int main() {

	struct mystruct ms;						// mystruct 구조체 변수 선언
	strcpy(ms.name, "park dogyoung");		// ms.name에 이름 입력
	ms.age = 27;
	ms.height = 167.2;
	ms.str = (char*)malloc(sizeof(100));    // 메모리 동적 할당
	printf("인사말: ");
	fgets(ms.str, 100, stdin);

	printf("이름: %s\n", ms.name);
	printf("나이: %d\n", ms.age);
	printf("키: %.1lf\n", ms.height);
	printf("인사말: %s\n", ms.str);

	free(ms.str);				// 받은 메모리 동적 할당 반환

	return 0;
}