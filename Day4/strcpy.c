#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
	strcpy - 문자열 복사 함수
*/
int main() {

	char str[100] = "oragne";
	char str2[100] = "apple";
	char* ps = "apple";

	//printf("str: %s\n", str);
	//printf("str2: %s\n", str2);

	//strcpy(str, str2);				// str2의 문자열을 str에 복사
	//printf("str: %s\n", str);
	//printf("str2: %s\n", str2);

	//strcpy(str, "banana");			// banana 문자열을 str에 복사
	//printf("str: %s\n", str);		// str: banana

	//strcpy(str, ps);
	//printf("str: %s\n", str);		// str: apple

	/*strcpy(ps, str2);				
	printf("ps: %s\n", ps);	*/	  // 문자열을 포인터에 저장해라 라는 것으로 오류 발생

	strncpy(str, "abcd", 3); // strncpy(복사할 문자열, 복사할 문자열, 복사할 길이(설정 가능))
	printf("%s\n", str); // abcnge


	return 0;
}