#include <stdio.h>
/*	
	배열 포인터
*/

void printAry(int*, int);

int main() {

	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int ary2[] = { 1, 2, 3 };

	int size = sizeof(ary) / sizeof(ary[0]);	
	int size2 = sizeof(ary2) / sizeof(ary2[0]);

	printAry(ary, size);
	printAry(ary2, size2);

	return 0;
}

void printAry(int *p, int _size) {

	for (int i = 0; i < _size; i++) {
		printf("ary[%d]: %d\n", i, p[i]);
	}

}


