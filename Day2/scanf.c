#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int a;
	char ch;

	// ���� �ϳ��� �Է¹�����
	/*scanf("%d", &a);
	scanf("%c", &ch);*/
	// �̴�� �����ų�ÿ��� a�� �Է½�Ų �Ŀ� ���α׷��� �����!!

	scanf("%d", &a);
	getchar(); // ���ۿ� �����ִ� ���๮�ڸ� �����ϱ� ���� getchar() �Լ� ȣ��
	scanf("%c", &ch);
	// => ���� �Է� ����

	return 0;
}