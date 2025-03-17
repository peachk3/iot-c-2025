#include <stdio.h>

// addr 구조체 선언
typedef struct addr {
	char name[20];
	int age;
	char tel[20];
	char addr[100];
} Addr;

void print_list(Addr *list);	// Addr 타입의 포인터를 인자로 받아 리스트 출력

int main() {

	// Addr 타입의 배열 list 초기화
	Addr list[3] = { {"홍길동", 59, "010-1234-1234", "몰라"},
		{"김철수", 33, "010-0987-0987", "부산"},
		{"김영희", 44, "010-1234-5678", "서울"} 
	};

	// print_list 함수 호출
	// list 배열을 인자로 넘겨 주소록 출력
	print_list(list);	

	//for (int i = 0; i < 3; i++) {
	//	printf("%s, %d, %s, %s \n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	//}

	return 0;
}

// print_list 함수 정의
// Addr 타입의 포인터 받아서 사람의 정보 출력
void print_list(Addr *list) { // list가 가리키는 주소에 저장된 값 참조

	for (int i = 0; i < 3; i++) { // list의 0번째부터 2번째까지 값 모두 출력
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}

}
