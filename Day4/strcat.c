#include <stdio.h>
/*
	strcat - ���ڿ��� ������ �Լ�
	strcat(���ڿ�, ���� ���ڿ�);
	strncat(���ڿ�, ���� ���ڿ�, ���� ���ڿ� ����);
*/

int main() {
	
	char str[100] = "apple";

	strcat(str, "juice"); 
	printf("str: %s\n", str); // applejuice

	strncat(str, "orange", 3);
	printf("%s\n", str);     // applejuiceora
	return 0;
}