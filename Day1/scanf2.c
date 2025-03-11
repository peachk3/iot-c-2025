#include <stdio.h>

int main() 
{
	char str[20];
	printf("문자열을 입력하세요 : ");
	scanf_s("%s", str, sizeof(str));
	
	printf("입력한 문자열 : %s\n", str); 

	/* printf("char 크기 : %d\n", sizeof(char)); // 1byte
	printf("정수 크기 : %d\n", sizeof(int));  // 4byte
	printf("float 크기 : %d\n", sizeof(float)); // 4byte
	printf("double 크기 : %d\n", sizeof(double)); // 8byte */

	return 0;
}