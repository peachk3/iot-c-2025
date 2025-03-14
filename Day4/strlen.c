#include <stdio.h>

int main() {

	char str[100] = "apple";

	printf("str 문자열 길이 : %d", strlen(str)); // 5 -> Null 문자 포함 X

	return 0;
}