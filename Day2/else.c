#include <stdio.h>
/* 1 ~ 10 �߿� Ȧ���� ��� */
int main() {

	int i = 0;
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0) continue;	// �ǳʶٰ� �ٽ� for������ ���ư�!!
		// if (i == 7) break;		// �ݺ����� ��������
		if (i >= 7) break;			// ���� �߻� ��� ���� ����
		printf("%d\n", i);
	}

	return 0;
}