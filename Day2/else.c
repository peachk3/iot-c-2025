#include <stdio.h>
/* 1 ~ 10 중에 홀수만 출력 */
int main() {

	int i = 0;
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0) continue;	// 건너뛰고 다시 for문으로 돌아감!!
		// if (i == 7) break;		// 반복문을 빠져나옴
		if (i >= 7) break;			// 예외 발생 경우 예방 가능
		printf("%d\n", i);
	}

	return 0;
}