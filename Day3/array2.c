#include <stdio.h>

int main() {

	int ary[] = { 1, 2, 3 };

	printf("�迭�� ũ��: %d\n", sizeof(ary)); // 12
	printf("�迭 �� �� ���� ũ��: %d\n", sizeof(ary[0])); // 4
	printf("�迭�� �� ����: %d\n", sizeof(ary)/ sizeof(ary[0])); // 3
	printf("�迭 �̸�: %p\n", ary); // �迭�� ���� �ּ�
	printf("�迭�� ù��° �� �ּ�: %p\n", &ary[0]);
	printf("�迭�� �ι�° �� �ּ�: %p\n", ary + 1); // �ּ��� ���� ���� ����Ŵ (4byte ������)
	printf("�迭�� �ι�° �� �ּ�: %p\n", &ary[1]);

	return 0; 
}