#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
	strcpy - ���ڿ� ���� �Լ�
*/
int main() {

	char str[100] = "oragne";
	char str2[100] = "apple";
	char* ps = "apple";

	//printf("str: %s\n", str);
	//printf("str2: %s\n", str2);

	//strcpy(str, str2);				// str2�� ���ڿ��� str�� ����
	//printf("str: %s\n", str);
	//printf("str2: %s\n", str2);

	//strcpy(str, "banana");			// banana ���ڿ��� str�� ����
	//printf("str: %s\n", str);		// str: banana

	//strcpy(str, ps);
	//printf("str: %s\n", str);		// str: apple

	/*strcpy(ps, str2);				
	printf("ps: %s\n", ps);	*/	  // ���ڿ��� �����Ϳ� �����ض� ��� ������ ���� �߻�

	strncpy(str, "abcd", 3); // strncpy(������ ���ڿ�, ������ ���ڿ�, ������ ����(���� ����))
	printf("%s\n", str); // abcnge


	return 0;
}