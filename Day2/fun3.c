#include <stdio.h>
/* �Լ�
	- �Է°� ����� �ִ� �Լ�
*/

// int Ÿ���� ���
int func(int a, int b) {
	int res = a + b;
	return res;
}

int main() {

	int result = func(10, 20); // �Լ����� return�� ���� result�� ����
	printf("ȣ�� �� ���ϵ� �� : %d", result);

	return 0;
}