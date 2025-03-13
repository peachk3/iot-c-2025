#include <stdio.h>
// 점수 입력 받아서 합계 -> 총점

int main() {

	int score[5] = { 0, 0, 0, 0, 0 };
	int size = sizeof(score) / sizeof(score[0]);
	int sum = 0;
	int avg = 0;

	printf("점수를 입력하세요: ");
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &score[i]);+
		printf("점수 : %d\t", score[i]);
		sum += score[i];
		avg = sum / size;
	}
		printf("\n");
		printf("합 : %d\n", sum);
		printf("평균 : %d\n", avg);

	return 0;
}