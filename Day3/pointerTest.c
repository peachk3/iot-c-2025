#include <stdio.h>

void inputAry(int*, int);
void printAry(int*, int);

int main() {
	
	int ary[] = { 0, 0, 0, 0, 0 };
	// int ary[5] = {0}; -> ��� �����ϳ� ������ ���� �����Ⱚ ��
	int size = sizeof(ary) / sizeof(ary[0]);

	inputAry(ary, size);
	printAry(ary, size);

	return 0;
}

void inputAry(int* p, int _size) {

	printf("�迭�� ���� ���� �Է��ϼ���: ");
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