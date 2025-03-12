#include <stdio.h>

int main() {
	
	int dan = 0;
	// 입력받은 단 구구단 출력하기
	printf("구구단을 확인할 단을 입력하세요 : ");
	scanf_s("%d", &dan);
	printf("%d단 시작\n", dan);
	for (int i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}

	// 구구단 출력하기
	for (int i = 2; i < 10; i++) {
			printf("%d단 시작 \n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
			printf("\n");
	}
}