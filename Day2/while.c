#include <stdio.h>
/* while�� ��� - ���� ���߱� ���� */
int main() {

	printf("���� ���߱� ���� ����!\n");
	while (1) { // ������ ��
		int num = 10;
		int inputNum;
	
		printf("���ڸ� �Է��ϼ���: ");
		scanf_s("%d", &inputNum);

		if (num == inputNum) {
			printf("����!!"); 
			break;
		}
		else if (num > inputNum) printf("Up!\n");
		else /*if (num < inputNum)*/ printf("Down!\n");
			
	}

	return 0;
}