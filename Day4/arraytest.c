#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 4명의 국영수 점수 받아서 학생별 합계, 평균 출력 (2차원 배열 사용)

int main() {

	int ary[4][3];
	printf("국어, 영어, 수학 점수를 입력하세요. \n");

	for(int i = 0; i < 4; i++) {
		printf("%d번째 학생의 국어, 영어, 수학 점수를 입력하세요. \n", i+1);
		//scanf("ary: %d", &ary[i]);
		for(int j = 0; j < 3; j++) {
			//gets(ary[i][j]);
			scanf("%d", &ary[i][j]);
		}
	}

	for (int i = 0; i < 4; i++) {
		int sum = 0;
		printf("%d번째 학생의 점수: ", i + 1);

		// 각 과목 점수 출력
		for (int j = 0; j < 3; j++) {
			printf("%d ", ary[i][j]);
			sum += ary[i][j];  // 합계 계산
		}

		// 합계와 평균 출력
		float average = sum / 3.0;  // 평균은 실수형으로 계산
		printf("합계: %d, 평균: %.2f\n", sum, average);  // 평균 소수점 둘째 자리까지 출력
	}

	return 0;
}