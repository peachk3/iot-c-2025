#include <stdio.h>

// addr ����ü ����
typedef struct addr {
	char name[20];
	int age;
	char tel[20];
	char addr[100];
} Addr;

void print_list(Addr *list);	// Addr Ÿ���� �����͸� ���ڷ� �޾� ����Ʈ ���

int main() {

	// Addr Ÿ���� �迭 list �ʱ�ȭ
	Addr list[3] = { {"ȫ�浿", 59, "010-1234-1234", "����"},
		{"��ö��", 33, "010-0987-0987", "�λ�"},
		{"�迵��", 44, "010-1234-5678", "����"} 
	};

	// print_list �Լ� ȣ��
	// list �迭�� ���ڷ� �Ѱ� �ּҷ� ���
	print_list(list);	

	//for (int i = 0; i < 3; i++) {
	//	printf("%s, %d, %s, %s \n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	//}

	return 0;
}

// print_list �Լ� ����
// Addr Ÿ���� ������ �޾Ƽ� ����� ���� ���
void print_list(Addr *list) { // list�� ����Ű�� �ּҿ� ����� �� ����

	for (int i = 0; i < 3; i++) { // list�� 0��°���� 2��°���� �� ��� ���
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}

}
