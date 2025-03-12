#include <stdio.h>
/* switch 문 
	switch(조건식) ~ case: break;
	- 정답이 명확할 때 사용 
	if문
	- 범위에 포함되는 것을 구할때
*/
int main() {

	int num = 10;
	int n = 0;

	switch (num) { // switch(조건식)
	case 10:
		printf("빙고");
		// break문이 없다면 다음 case문도 실행됨 (break문이 있을때까지 실행됨)
		break; // 반복문을 벗어남

	case 50:
		printf("작음");
		break;
	
	case 200:
		printf("큼");
		break;

	default: // 생략 가능
		printf("이것도 저것도 아님");
		break;
	}

	return 0;
}