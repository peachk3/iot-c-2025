#include <stdio.h>
/*
	puts, fputs �Լ� - ���� ����Լ�
	stdout: ǥ�� ��� ��Ʈ��(����)
*/
int main() {

	char str[100] = "Delmonte orange";
	char* ps = "banana";

	printf("%s\n", str);
	puts(str);				// �ڵ� ����
	fputs(str, stdout);		// �ڵ� ���� X
	puts(ps);
	fputs(ps, stdout);


	return 0;
}

// str(�迭), ps(������) ������
// str - ���ڿ� ���� ����
// ps - ���ͷ� ����Ű�� ������, ���� �Ұ��� / ���ڿ� ���ͷ� "banana"�� ����Ű�� �ּҸ� ����