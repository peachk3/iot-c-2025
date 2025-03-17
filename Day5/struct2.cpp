#include <stdio.h>
/*

*/
struct mystruct {
	int num;
	double grade;
};

int main() {

	struct mystruct s;

	s.num = 100;
	s.grade = 99.9;

	printf("num: %d, grade: %.1lf", s.num, s.grade);

	return 0;
}