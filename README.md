# iot-c-2025
iot 개발자 기초 C언어 리포지토리

## 1일차
- C언어 기초
	- 출력문 (printf)
	- 변수 (value)
	- scanf

## 2일차
- C언어 기초
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
- C 언어 기초
	- 배열(array)
	- 포인터(pointer)
	- 문자형(char)