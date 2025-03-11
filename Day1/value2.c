#include <stdio.h>

int main() {

	char ch = 0; // 1바이트 정수 -> -128 ~ 127 (음수 포함)
	// = (signed) char ch = 0; 
	unsigned char ch2 = 0; // 0 ~ 255 (양수만 -> unsigned 추가)

	unsigned int num;
	num = 123456;
	printf("num : %d\n", num);
	num = -1;
	printf("num: %d\n", num);
	printf("num: %u\n", num);

	// 컴퓨터 뺄셈
	// 7 - 3 = 4
	// => 3의 보수 7 -> 7 + 7 = 14 / => 10빼고 4!
	// 4 - 1 = 3
	// => 1의 보수 9 -> 9 + 1 = 10 / => 10빼고 3!

	return 0;
}