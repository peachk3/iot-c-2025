#include <stdio.h>

void inputAry(int*, int);
void printAry(int*, int);

int main() {
	
	int ary[] = { 0, 0, 0, 0, 0 };
	// int ary[5] = {0}; -> 사용 가능하나 나머지 값이 쓰레기값 들어감
	int size = sizeof(ary) / sizeof(ary[0]);

	inputAry(ary, size);
	printAry(ary, size);

	return 0;
}

void inputAry(int* p, int _size) {

	printf("배열에 넣을 값을 입력하세요: ");
	int i;
	for (i = 0; i < _size; i++) {
		scanf_s("%d", &p[i]);
	}

}

void printAry(int *p, int _size) {

	for (int i = 0; i < _size; i++) {
		printf("ary[%d]: %d\n", i, p[i]);
	}

}