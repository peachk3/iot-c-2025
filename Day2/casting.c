#include <stdio.h>
/* ����ȯ */

int main() {

	int n = 10;
	int n2 = 3;
	double res;

	// res = (double)n / 3; // ����/���� => ���� -> �Ǽ��� ��ȯ �ʿ�
	//res = n / 3.0;
	res = (double)n / 3.0; // 3.3 �� ������ ����ȯ�� ��ų �ʿ�� X

	printf("res: %.1lf\n", res);

	return 0;
}

// num = 10
// str(num)
