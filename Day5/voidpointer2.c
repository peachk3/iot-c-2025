#include <stdio.h>
/*
	void pointer - Ÿ���� �������� ���� ������
*/
int main() {

	int n = 10;
	double db = 3.14;

	// int pn = &n;
	// double* pdlb = &db;
	void* p; // ��� Ÿ���� �� ���� �� �ִ� ������

	p = &n;
	printf("*p: %d\n", *(int*)p); // ��������� Ÿ���� ��������� ��(����ȯ)

	p = &db;
	printf("*p: %.1lf\n", *(double*)p); // 

	return 0;
}