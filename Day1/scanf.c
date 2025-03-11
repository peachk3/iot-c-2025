/* 입력 - scanf() */
#define _CRT_SECURE_NO_WARNINGS // 
#include <stdio.h>

int main() 
{
	//int inputVal;
	//printf("정수를 입력하세요 : ");
	//scanf("%d", &inputVal);		// &주소연산자 - 주소를 통해서 저장해야함
	//// scanf -> 안내 문자열 입력 불가!! -> printf로 안내 문자열 출력

	//printf("입력한 정수는 %d입니다.", inputVal);

	int n1, n2;
	printf("두 개의 정수를 입력하세요");
	scanf_s("%d %d", &n1, &n2);

	printf("입력한 두 정수는 %d, %d입니다. \n", n1, n2);

	return 0;
}