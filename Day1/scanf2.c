#include <stdio.h>

int main() 
{
	char str[20];
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str, sizeof(str));
	
	printf("�Է��� ���ڿ� : %s\n", str); 

	/* printf("char ũ�� : %d\n", sizeof(char)); // 1byte
	printf("���� ũ�� : %d\n", sizeof(int));  // 4byte
	printf("float ũ�� : %d\n", sizeof(float)); // 4byte
	printf("double ũ�� : %d\n", sizeof(double)); // 8byte */

	return 0;
}