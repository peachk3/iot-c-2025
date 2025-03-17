#include <stdio.h>


struct profile {
	int age;
	double height;
	double weight;
};

struct student {
	struct profile pf;
	int id;
	double grade;
};

int main() {

	struct student s;		// 변수 선언 및 초기화
	s.grade = 99;
	s.id = 2025;
	s.pf.age = 20;
	s.pf.height = 180;
	s.pf.weight = 60;

	printf("키: %.1lf", s.pf.height);
	printf("몸무게: %.1lf", s.pf.weight);
	printf("나이: %d", s.pf.age);
	printf("아이디: %d", s.id);
	printf("점수: %.1lf", s.grade);

	return 0;
}