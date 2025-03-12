#include <stdio.h>
/* while문
	while (조건식) {
		반복될 실행문
	}
*/
int main() {

	// 안녕하세요 5번 출력
	int i = 0;
	while (i < 5) {
		printf("안녕하세요!. %d\n", i + 1); 
		i++;
	}
	
	// 1 ~ 100 출력 / sum 구하기
	i = 0;
	int sum = 0;
	while (i < 100) {
		printf("%d\n", i + 1);
		i++;
		sum += i;
		printf("sum = %d\n", sum);
	}

	return 0;
}