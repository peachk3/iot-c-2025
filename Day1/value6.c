/* ��� */
#include <stdio.h>

int main() 
{
	int r = 10;
	// ���! �ٲ�� �ȵ�
	const double pi = 3.14;
	double cf = 2 * pi * r;

	// pi = 3.15; // ���� �߻� -> ����� ������ �� ����
	double* dp = &pi;
	*dp = 4.0;
	// * ������ ����ؼ� �� ����

	printf("���ѷ�: %.2lf\n", cf);
	printf("pi: %.2lf", pi);

	return 0;
}