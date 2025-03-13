#include <stdio.h>

void swap(int*, int*);

int main() {

	int a = 10;
	int b = 20;

	printf("호출 전 a: %d, b: %d\n", a, b);

	swap(&a, &b);
	printf("호출 후 a: %d, b: %d\n", a, b);

	return 0;
}

void swap(int *pa, int *pb) {  // a = 10, b = 20
	int temp;
	temp = *pa;		// temp = 10
	*pa = *pb;		// a = 20
	*pb = temp;		// b = 10
}
// => 값 바뀌지 않음! / 값을 변경하려면 함수에게 바꾸고자하는 변수의 주소값을 전달해주면 됨