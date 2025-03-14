#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void myStrcpy(char* str, char* str2);

int main() {

	char str[100] = "peach";
	char str2[100] = "apple";
	      
	myStrcpy(str, str2);

	return 0;
}

void myStrcpy(char* str, char* str2) {

	printf("기존 문자열 str: %s\t str2: %s\n", str, str2);
	printf("문자 입력 : ");
	strcpy(str, str2); 
	//gets(str2);
	fgets(str2, sizeof(str2), stdin);
	printf("바뀐 문자열 str: %s\t str2: %s\n", str, str2);

}