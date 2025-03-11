/* 배열 
	동일한 자료형을 연속적으로 저장할 수 있는 공간
*/
# include <stdio.h>

int main() {

	char str[10] = "banana";		// 문자타입 배열선언 str[방의 개수]

	printf("str: %s\n", str);
	printf("str[0]: %c\n", str[0]); // 배열의 첫번째 문자 출력
	printf("str[1]: %c\n", str[1]); 
	printf("str[5]: %c\n", str[5]); 
	printf("str[6]: %c\n", str[6]); // 없음
	//printf("str[6]: %s\n", str[6]); // 문자열끝에는 null문자가 옴

	// 배열에 저장할 경우
	// 배열! -> for문!!
	char str2[6] = "apple"; // str2[5] -> 문자열 끝에 null문자가 올 곳이 없어서 출력값이 이상하게 나옴
	printf("str2: %s\n", str2); // apple //%s -> 배열의 주소에 있는 값을 출력
	str2[0] = 'A';
	printf("str2: %s", str2); // Apple

	// 배열 이름 = 배열의 시작 주소 (배열의 0번방 주소)
	// 변수 이름 != 배열의 주소
	
	// 개별적으로 입력 가능 (for문 사용해서)
	// str = str2; 사용 불가


	return 0;
}