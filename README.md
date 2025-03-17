# iot-c-2025
### iot 개발자 기초 C언어 리포지토리
## C 언어 기초

## 1일차
- 출력문 (printf)
- 변수 (value)
- scanf

## 2일차
- scanf 복습

- 연산자(operator)  
	- shift 연산자
	- 삼항 연산자 
	```C
	(조건식? 참일때의 값 : 거짓일때의 값)
	```

- 제어문
	- 선택제어문 (if, swith)
		- if
		```C
			if(조건문){
				실행문
			}
		```
		- switch
			- 경우가 적을 때 사용
			- case문 사용시 break문 챙겨쓰기
	- 반복제어문 (for, while)
		- for
			- 반복되는 구간이 정해져 있을 때 
			```C
				for(초기식;조건식;증감식){
					실행문
					continue; // 건너뛰고 다시 for문으로 돌아감
					break; // for문 빠져나감
				}

				for(;;){ // for문으로 무한반복

				}
			```
			- 구구단 출력하기
			
		- while - 정수 맞추기 게임
		```C
			while(1) { // 참일 때 무한반복
			}
		```

## 3일차
- 배열(array)
- 포인터(pointer)
	- [C](./Day3/pointer.c)

- 문자형(char)

## 4일차
- 문자열(string)
	- string
		- [C](./Day4/string.c)
	- strlen
		- [C](./Day4/strlen.c)
	- strcpy
		- [C](./Day4/strcpy.c)
	- strcat
		- [C](./Day4/strcat.c)
	- strcmp
		- [C](./Day4/strcmp.c)

- 변수(value)
	- 전역변수 : 프로그램 전체
	- 지역변수 : 블록 안에서만 사용, 매개변수(지역변수), 자동변수
	- 정적변수 : 전역 + 지역

- 이차원 배열
	- 열이 중요함!
	```C
	int ary[열] = { 1, 2, 3 };
	int ary[행][열];
	```

- 포인터
	- 이중포인터 
		- [C](./Day4/dpointer.c)
	- 포인터 배열 
		- 포인터를 저장할 수 있는 배열 
		- [C](./Day4/pointArray.c)
	- 배열 포인터
		- 배열을 가리키는 포인터
		- [C](./Day4/arrayPointer.c)


## 5일차
- 포인터
	- 함수 포인터
		- 
	- void 포인터 (타입 미지정)

	- 동적 메모리 할당
	
	## C++
	- 구조체
		- [C]
	- (Lvalue)상수 = (Rvalue)상수 사용 불가! Lvalue - 주소값 올 수 없음! 변수만 가능
	
	- 구조체 포인터 -> 구조체 전체를 가리킴
