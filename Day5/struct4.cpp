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

	struct student s;		// ���� ���� �� �ʱ�ȭ
	s.grade = 99;
	s.id = 2025;
	s.pf.age = 20;
	s.pf.height = 180;
	s.pf.weight = 60;

	printf("Ű: %.1lf", s.pf.height);
	printf("������: %.1lf", s.pf.weight);
	printf("����: %d", s.pf.age);
	printf("���̵�: %d", s.id);
	printf("����: %.1lf", s.grade);

	return 0;
}