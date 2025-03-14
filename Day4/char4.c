#include <stdio.h>

void myStrInput(char*, int);

int main() {

	char str[100];		 // 문자열을 저장할 배열
	
	myStrInput(str, 100);	

	printf("입력한 문자열: %s\n", str);

	return 0;
}

void myStrInput(char* ps, int size) {

	int i = 0;
	while (1) {
		ps[i] = getchar(); // 한 문자씩 입력받음
		if (ps[i] == '\n' || i >= (size - 1)) break; // 개행문자가 입력되거나 배열의 끝에 도달하면 종료
		i++; 
	}
	ps[i] = '\0'; // 문자열의 끝을 표시하는 NULL문자

}