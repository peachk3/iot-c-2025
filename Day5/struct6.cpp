#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct vision { 

	double left;		// �������	
	double right;		// �������

	void move() {};		// ����Լ�

} Vision;

Vision exchange(Vision);		// �Լ� ����

int main() {

	Vision rot; // ����ü Vision ���� ����
	printf("�÷� �Է� > ");
	scanf("%lf %lf", &(rot.left), &(rot.right)); // �Է¹��� �÷� ���� �ּҿ� �ֱ�

	rot = exchange(rot);

	printf("�ٲ� �÷�: %.1lf, %.1lf\n", rot.left, rot.right); 

	return 0;
}