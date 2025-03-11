/* 상수 */
#include <stdio.h>

int main() 
{
	int r = 10;
	// 상수! 바뀌면 안됨
	const double pi = 3.14;
	double cf = 2 * pi * r;

	// pi = 3.15; // 에러 발생 -> 상수는 변경할 수 없음
	double* dp = &pi;
	*dp = 4.0;
	// * 포인터 사용해서 값 변경

	printf("원둘레: %.2lf\n", cf);
	printf("pi: %.2lf", pi);

	return 0;
}