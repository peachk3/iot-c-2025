#include <stdio.h>
/*
	strcmp - 문자열 비교 함수
*/
int main() {

	char str[100] = "apple";
	char str2[100] = "orange";

	// 사전순으로 뒤에 오는 문자열 출력하기!!
	// str이 사전에서 먼저 나오면 -1 반환, str2가 먼저 나오면 1 반환, 같으면 0을 반환
	if (strcmp(str, str2) > 0) { // -1 > 0 -> else => orange 출력
		printf("%s\n", str);  // str2가 먼저 나오면 str 출력
	}
	else printf("%s\n", str2); // 0보다 작거나 0일 경우 str2 출력 

	printf("a: %d\n", 'a');
	printf("b: %d\n", 'b');


	//strncmp(str, str2, 3);
	//printf("%s\n", str);


	return 0;
}
