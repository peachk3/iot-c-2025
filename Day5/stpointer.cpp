#include <stdio.h>
/*
	����ü ������ : 

*/
typedef struct score{ // typedef - ������
	int kor;
	int eng;
	int mat;
} Score;

int main() {

	Score s = { 100, 80, 85 };
	Score* ps = &s;

	printf("����: %d\n", ps->kor);
	printf("����: %d\n", ps->eng);
	printf("����: %d\n", ps->mat); // (*ps).mat - �ּҸ� ���� score�� ����-> mat �� �б�

	return 0;
}

/*
	����ü ������ ���ؼ� ����� �����ϴ� ���? .(������ٿ�����)
	����ü �����͸� ���ؼ� ����� �����ϴ� ���? -> (ȭ��ǥ������, �ַο쿬����)
*/