#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* scanf, gets() 공백 가능
* stdin - 표준 입력 버퍼(입력 스트림)
*/

int main() {

	char str[100];

	/* scanf */
	//printf("문자열 입력 > "); // 문자열 사이 공백 입력시 공백 앞의 문자열만 출력
	//scanf("%s", str); // 공백, 탭, 개행 -> 그 앞의 문자열만 출력됨
	//
	//printf("문자열(scanf): %s\t", str); // 공백 앞의 문자열만 출력
	//scanf("%s", str);
	//printf("문자열(scanf): %s", str); // 공백 뒤의 문자열만 출력

	/* gets */
	//printf("공백을 포함한 입력 > "); 
	//gets(str);
	//printf("입력 받은 문자열(gets): %s", str); // 공백 포함된 문자열 출력됨

	/* fgets */ 
	printf("공백을 포함한 입력 > ");
	fgets(str, sizeof(str), stdin); // stdin(표준 입력)으로부터 문자열을 입력받아서 배열 str에 저장하되, 
									// sizeof(str)의 길이만큼 저장하라!
	printf("입력 받은 문자열(fgets): %s", str); // 공백 포함된 문자열 출력됨

	return 0;
}