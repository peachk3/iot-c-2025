#include <stdio.h>
/* switch �� 
	switch(���ǽ�) ~ case: break;
	- ������ ��Ȯ�� �� ��� 
	if��
	- ������ ���ԵǴ� ���� ���Ҷ�
*/
int main() {

	int num = 10;
	int n = 0;

	switch (num) { // switch(���ǽ�)
	case 10:
		printf("����");
		// break���� ���ٸ� ���� case���� ����� (break���� ���������� �����)
		break; // �ݺ����� ���

	case 50:
		printf("����");
		break;
	
	case 200:
		printf("ŭ");
		break;

	default: // ���� ����
		printf("�̰͵� ���͵� �ƴ�");
		break;
	}

	return 0;
}