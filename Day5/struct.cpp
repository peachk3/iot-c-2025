#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
	struct(����ü) - ����� ���� �ڷ���
	���� �ڷ����� ��� ���� ���� �ڷ���(Ÿ��)
*/
// �޸� ������ �Ҵ� X 
struct Human {				// ����ü ���� (struct ����ü��{};)
	char name[100];			// �������
	int age;				// �������
};

int main() {

	/* . -> ��� ���� ������ */
	struct Human h;			// Human ����ü�� ���� h ���� (struct Human�� �ڷ���!)
							// ���� ���� => �޸� ������ �Ҵ�
	h.age = 27;		// h��ü�� ��� age�� 30�� ����
	//h.name = "park dogyoung"; // ���� �߻� -> ��� = ���!!
	strcpy(h.name, "park dogyoung");

	/* char str2[100];
	str2[1] = 'p';
	str2[2] = 'a';
	...
		str[������] = '\0'; // ���� ����
	=> �Է� �������� */

	//char str[100] = "park dogyoung";
	//printf("%s\n", str);

	//char str2[100];
	//str2 = "peach K"; // ���� �߻� -> ��� = ���!! / ���� = ��� ����

	printf("���� �̸��� %s�̰�, ���̴� %d�Դϴ�.", h.name, h.age);

	return 0;
}