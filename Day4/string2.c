#include <stdio.h>
/*
	문자열 상수는 주소이다.
*/
int main() {

	char* ps = "orange"; // 문자열 상수 = 주소 -> 포인터 타입에 저장해서 사용 가능
	printf("ps가 가리키는 값: %s\n", ps);
	ps = "banana";
	printf("ps가 가리키는 값: %s\n", ps);


	return 0;
}