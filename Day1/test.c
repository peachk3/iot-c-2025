#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() 
{
	char str[100];
	int age = 0;

	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", str, sizeof(str));

	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);

	printf("�Է��� �̸�: %s, ���� : %d\n", str, age);

	return 0;
}