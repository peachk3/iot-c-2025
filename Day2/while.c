#include <stdio.h>
/* while문 사용 - 정수 맞추기 게임 */
int main() {

	printf("숫자 맞추기 게임 시작!\n");
	while (1) { // 무조건 참
		int num = 10;
		int inputNum;
	
		printf("숫자를 입력하세요: ");
		scanf_s("%d", &inputNum);

		if (num == inputNum) {
			printf("정답!!"); 
			break;
		}
		else if (num > inputNum) printf("Up!\n");
		else /*if (num < inputNum)*/ printf("Down!\n");
			
	}

	return 0;
}