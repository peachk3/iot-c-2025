#include <stdio.h>
/*	const
*	- 어디에 붙었는지에 따라 접근방식이 다름!!
*/

int main() {

	const int num = 10;
	//int num = 20;

	int num2 = 10;
	num2 = 20;
	int* pnum2 = &num2;
	*pnum2 = 30;
	printf("%d\n", num2);

	const int* pn2 = &num2;		// 데이터 상수 (포인터 변수를 통항 데이터의 변경을 불허한다)
	// *pn2 = 100;
	num2 = 0;
	pn2 = &num2;

	int num3 = 40;
	int* const pnum3 = &num3;	// 포인터 상수 (포인터변수가 가리키는 주소의 변경을 불허한다)
	*pnum3 = 100;
	printf("%d\n", num3);
	//pnum3 = &num2;

	const int* const pn5 = &num2;
	//*pn5 = 1000;
	//pn5 = &num3;
	num2 = 40;

	return 0;
}