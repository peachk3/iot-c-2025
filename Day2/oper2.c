#include <stdio.h>
/* ���� ������ */
int main() {
	int n = 10, n2 = 20;
	int res;

	res = (n > n2) ? n : n2;
	// ���ǽ� ? ���϶� �� : �����϶� ��
	printf("res : %d\n", res);


	//printf("n++ : %d\n", n++);   // ���� ������ (���������� ����) -> ����� �� ������Ŵ
	//printf("++n2 : %d\n", ++n2); // ������Ű�� ��� (����)
	//printf("n : %d\n", n); // 11

	res = n++;
	printf("res : %d, n: %d\n", res, n);  // 10, 11

	res = ++n2;
	printf("res : %d, n: %d\n", res, n2); // 21, 21

	return 0;
}