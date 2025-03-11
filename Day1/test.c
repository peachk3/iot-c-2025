#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() 
{
	char str[100];
	int age = 0;

	printf("이름을 입력하세요 : ");
	scanf_s("%s", str, sizeof(str));

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);

	printf("입력한 이름: %s, 나이 : %d\n", str, age);

	return 0;
}