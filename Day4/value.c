#include <stdio.h>
/*
	
*/
void incFunc();

int cnt = 0; 	// ��������	- ���α׷� ��ü���� ��� ����
// ���������� ���������� �̸��� ���� ��� ���������� �������� �̸��� ����
// �������� - �ʱ�ȭ �������� 0���� �ڵ� �ʱ�ȭ

int main() {

	//int cnt = 0;		// local ��������

	for (int i = 0; i < 5; i++){
		incFunc(cnt);
		printf("cnt: %d\n", cnt);
	}
	cnt++;
	printf("cnt: %d\n", cnt);
	return 0;
}

void incFunc(){ // incFunc(int cnt) -> main�Լ��� cnt�� �ٸ� => 
	
	cnt++; // incFunc()�ȿ� ���� X ��� �������� ���
	printf("incFunc cnt: %d\n", cnt); 
}
// �Լ��� ������ �Լ� ���� ���������� ��� ��� �Ұ���