#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct vision { 

	double left;		// 멤버변수	
	double right;		// 멤버변수

	void move() {};		// 멤버함수

} Vision;

Vision exchange(Vision);		// 함수 원형

int main() {

	Vision rot; // 구조체 Vision 변수 선언
	printf("시력 입력 > ");
	scanf("%lf %lf", &(rot.left), &(rot.right)); // 입력받은 시력 각각 주소에 넣기

	rot = exchange(rot);

	printf("바뀐 시력: %.1lf, %.1lf\n", rot.left, rot.right); 

	return 0;
}