#include <stdio.h>
/*
	���� ������
*/
int main() {
	int n = 100;
	int* pn;
	int** ppn;				// ���� ������

	pn = &n;				// ���� n�� �ּҸ� pn�� ����
	ppn = &pn;				// �����ͺ��� pn�� �ּҸ� �����ϴ� ���� ������

	printf("n: %d\t n �ּ�: %p\n", n, &n); //n: 100   n �ּ�: 000000889BFCF6C4
	printf("pn: %p\t pn �ּ�: %p\t *pn: %d\n", pn, &pn, *pn);
	// pn: 000000889BFCF6C4     pn �ּ� : 000000889BFCF6E8       *pn : 100
	printf("ppn: %p\t ppn �ּ�: %p\t *pnn: %p\t **ppn: %d\n", ppn, &ppn, *ppn, **ppn);
	// ppn: 000000166FF2FC68    ppn �ּ�: 000000166FF2FC88      *pnn: 000000166FF2FC44   **ppn: 100
	// pn = *ppn
	return 0;
}