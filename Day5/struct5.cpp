#include <stdio.h>

typedef int int32mt; // int���� int32mt�� ���ڴ�!

struct human {
	char name[100];
	int32mt age;
};
typedef struct mystruct {
	int a;
	int b;
} Myst;

int main() {

	//struct human h = { "ȫ�浿", 100 };
	//struct human h2 = { "������", 100 };

	struct human h = { "ȫ�浿", 100 },
		h2 = { "�̼���", 110 },
		h3 = { "������", 200 };

	Myst m;


	return 0;
}