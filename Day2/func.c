#include <stdio.h>
/* �Լ�
	- �Է°� ����� ���� �Լ� 
	- �Լ� �ȿ��� ����� ��Ÿ��
*/
// ��� X - void
// �Լ� ����
void func(void) {	// �Լ� ���� : �Լ��� ����� ���⿡ �ۼ�
	int a = 10, b = 20;

	printf("void func()\n");
	printf("a + b: %d", a + b);
}

int main() {
	
	func(); // �Լ� ȣ�� 
	return 0;
}