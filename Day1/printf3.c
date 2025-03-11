/* 문자 */
#include <stdio.h>

int main(void) 
{
	//printf("%c\n", a); // 오류 -> 식별자(변수)가 지정되어 있지 않음
	printf("%c\n", 'a');  // 문자는 ''로 감싸야 함
	print("박도경\n");
	printf("%s\n", "박도경"); // 문자열은 ""로 감싸야 함

	return 0;
}