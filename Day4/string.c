#include <stdio.h>
/*
	���ڿ�
*/
int main() {
	
	char str[100] = "orange";

	printf("%s\n", str); // �迭�� ���ڰ� �ϳ��� ����� / null���ڰ� �����
	printf("%s\n", "orange"); // ���ڿ� ���
	printf("%p\n", "orange"); // ���ڿ� ����� �޸� �ּҸ� ����Ŵ
	printf("%c\n", *"orange"); // ���� ���� ������
	printf("%c\n", *("orange" + 1)); // r
	printf("%c\n", "orange"[2]); // a

	//"orange"[0] = 'O'; / ���� �߻�
	//*"orange" = 'O'; / ���� �߻�
	// => ���ڿ� ����̱� ������ ���� �Ұ���

	printf("%s\n", "orange");

	return 0;
}

// �޸�
/*
	Data
		- �� : ����ڿ��� �Ҵ�� �޸� ����
		- ���� : ���� ����, �Ű�����
		- ������ : ���� ����, ���� ����(static)
		- �ڵ� : ���ڿ� ���, ���ͷ�
*/