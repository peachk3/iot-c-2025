#include <stdio.h>

typedef int int32mt; // int형을 int32mt로 쓰겠다!

struct human {
	char name[100];
	int32mt age;
};
typedef struct mystruct {
	int a;
	int b;
} Myst;

int main() {

	//struct human h = { "홍길동", 100 };
	//struct human h2 = { "강감찬", 100 };

	struct human h = { "홍길동", 100 },
		h2 = { "이순신", 110 },
		h3 = { "김유신", 200 };

	Myst m;


	return 0;
}