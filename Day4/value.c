#include <stdio.h>
/*
	
*/
void incFunc();

int cnt = 0; 	// 전역변수	- 프로그램 전체에서 사용 가능
// 전역변수와 지역변수의 이름이 같을 경우 전역변수는 지역변수 이름에 묻힘
// 전역변수 - 초기화 미지정시 0으로 자동 초기화

int main() {

	//int cnt = 0;		// local 지역변수

	for (int i = 0; i < 5; i++){
		incFunc(cnt);
		printf("cnt: %d\n", cnt);
	}
	cnt++;
	printf("cnt: %d\n", cnt);
	return 0;
}

void incFunc(){ // incFunc(int cnt) -> main함수의 cnt와 다름 => 
	
	cnt++; // incFunc()안에 변수 X 경우 전역변수 사용
	printf("incFunc cnt: %d\n", cnt); 
}
// 함수가 끝나면 함수 안의 지역변수는 모두 사용 불가능