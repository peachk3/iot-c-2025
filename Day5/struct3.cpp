#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mystruct {
	char name[20];
	int age;
	double height;
	char* str;
};

int main() {

	struct mystruct ms;						// mystruct ����ü ���� ����
	strcpy(ms.name, "park dogyoung");		// ms.name�� �̸� �Է�
	ms.age = 27;
	ms.height = 167.2;
	ms.str = (char*)malloc(sizeof(100));    // �޸� ���� �Ҵ�
	printf("�λ縻: ");
	fgets(ms.str, 100, stdin);

	printf("�̸�: %s\n", ms.name);
	printf("����: %d\n", ms.age);
	printf("Ű: %.1lf\n", ms.height);
	printf("�λ縻: %s\n", ms.str);

	free(ms.str);				// ���� �޸� ���� �Ҵ� ��ȯ

	return 0;
}