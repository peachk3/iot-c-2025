#include <stdio.h>
/*
	getchar, putchar - ���� ���� �Լ� (�ۼ���)
*/
int main() {

	int ch;	// intŸ�� ���� ��� char ��� ����

	ch = getchar();		// �ѹ��ڸ� �о���� �Լ� (�������·� ������!)
	putchar(ch);		// �ѹ��ڸ� ����ϴ� �Լ�
	putchar('\n');		// ���� �� ����!
	
	printf("input: %d\n", ch);

	return 0;
}