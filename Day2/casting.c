#include <stdio.h>
/* 형변환 */

int main() {

	int n = 10;
	int n2 = 3;
	double res;

	// res = (double)n / 3; // 정수/정수 => 정수 -> 실수로 변환 필요
	//res = n / 3.0;
	res = (double)n / 3.0; // 3.3 두 가지다 형변환을 시킬 필요는 X

	printf("res: %.1lf\n", res);

	return 0;
}

// num = 10
// str(num)
