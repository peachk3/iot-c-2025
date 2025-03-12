#include <stdio.h>
/* for문 
	for(초기식;조건식;증감식){
		실행문
	}
*/
int main() {
	
	int i;

	for (int i = 0; i < 10; i++) {
		printf("i: %d\n", i);

	}

	int sum = 0; // sum 초기화 (누적시키는 기능을 가진 변수는 초기화 필수!)

	for (int i = 1; i < 11; i++) {
		printf("i: %d\n", i);
		sum += i;
	}
	printf("1 ~ 10까지 합은 %d입니다.", sum);

	return 0;
}