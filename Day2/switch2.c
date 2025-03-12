#include <stdio.h>

int main() {

	printf("숫자 맞추기 게임 Start!\n");
	
	while (1) {

		int num = 3;
		int n = 0;

		printf("숫자를 입력하세요 (1 ~ 5) : ");
		scanf_s("%d", &n);
		switch(n) {
		case 5:
			printf("Down!\n");
			break;

		case 4:
			printf("Down!\n");
			break;

		case 3:
			printf("정답!");
			return 0;

		case 2:
			printf("Up\n");
			break;

		case 1:
			printf("Up\n");
			break;
		}
	}

}