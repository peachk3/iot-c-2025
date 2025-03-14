#include <stdio.h>
/*
	puts, fputs 함수 - 전용 출력함수
	stdout: 표준 출력 스트림(버퍼)
*/
int main() {

	char str[100] = "Delmonte orange";
	char* ps = "banana";

	printf("%s\n", str);
	puts(str);				// 자동 개행
	fputs(str, stdout);		// 자동 개행 X
	puts(ps);
	fputs(ps, stdout);


	return 0;
}

// str(배열), ps(포인터) 차이점
// str - 문자열 수정 가능
// ps - 리터럴 가리키는 포인터, 수정 불가능 / 문자열 리터럴 "banana"를 가리키는 주소만 저장