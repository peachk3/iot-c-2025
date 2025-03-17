#include <stdio.h>

int main(int argc, char* argv[]) { // 포인터 배열 (char * argv[]) == (char ** argv)

	int i = 0;
	printf("전달 갯수: %d\n", argc);
	for (i = 0; i < argc; i++) {
		//printf("전달 값: %s\t", argv[i]);
	}

	return 0;
}