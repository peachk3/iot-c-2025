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

	printf("���� ���ڿ� str: %s\t str2: %s\n", str, str2);
	printf("���� �Է� : ");
	strcpy(str, str2); 
	//gets(str2);
	fgets(str2, sizeof(str2), stdin);
	printf("�ٲ� ���ڿ� str: %s\t str2: %s\n", str, str2);

}