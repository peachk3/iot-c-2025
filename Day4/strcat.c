#include <stdio.h>
/*
	strcat - 문자열을 붙히는 함수
	strcat(문자열, 붙일 문자열);
	strncat(문자열, 붙일 문자열, 붙일 문자열 길이);
*/

int main() {
	
	char str[100] = "apple";

	strcat(str, "juice"); 
	printf("str: %s\n", str); // applejuice

	strncat(str, "orange", 3);
	printf("%s\n", str);     // applejuiceora
	return 0;
}