#include <stdio.h>
/*
	pointer - �ּ��� ũ��� ��ǻ�� ȯ����� �ٸ���.
	�����ͺ����� ũ��� Ÿ�Կ� ������� �����ϴ�. �ֳ��ϸ� �ּ��� ũ��� �����ϱ� ����
*/
int main() {

	char ch;
	int n;
	char* pch = &ch;
	int* pn = &n;
	printf("char �ּ� ũ��: %d\t", sizeof(&ch));
	printf("int �ּ� ũ��: %d\n", sizeof(&n));
	printf("char ������ ũ��: %d\t", sizeof(pch));
	printf("int ������ ũŰ: %d\n", sizeof(pn));
	// �ּ� ũ�� = ������ ũŰ


	// 32bit ��ǻ�Ϳ��� 4btye������ �� �� ����...?
	// 1Kbyte = 1024(2^10)bit / MB = 2^20 / GB = 2^30 / 4GB 2^32 
	// 1kbite = 1024bit (2^10)

	return 0;
}