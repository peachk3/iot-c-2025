#include <stdio.h>
#include <stdlib.h>

int main() {

	// main �ȿ� ���� -> �������� -> ���� ����
	char str[100]; // ���ÿ� 100���� ���ڿ� �Է��ϴ� ������ �Ҵ���
	char* ps;

	printf("���ڿ��� �Է��ϼ��� > ");
	gets(str);
	printf("�Է��� ���ڿ�: %s\n", str);

	/*���ڿ� ����*/
	ps = (char*)malloc(strlen(str) + 1); // �Էµ� ���ڿ��� ������ ������ �����κ��� �Ҵ� ���� - (���ڿ� ���� + 1(null ����))
	if (ps == NULL) {
		exit(1); // �Ҵ���� ���� -> ���� ��Ŵ
	}

	strcpy(ps, str);	// ���ڿ� ����
	printf("heap ������ �Է�: %s\n", ps);

	free(ps);	// ���� �޸� ��ȯ

	return 0;
}