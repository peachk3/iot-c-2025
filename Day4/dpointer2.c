#include <stdio.h>
/*
	���� ������ ����ϱ�
*/

void printAry(char**, int);

int main() {

	char* ary[] = { "mango", "apple", "banana"};

	printAry(ary, 3);

	return 0;
}

void printAry(char** pary, int size) {

	for (int i = 0; i < size; i++) {
		printf("%s\n", pary[i]); // *(pary + i)�� ����
	}

}