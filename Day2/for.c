#include <stdio.h>
/* for�� 
	for(�ʱ��;���ǽ�;������){
		���๮
	}
*/
int main() {
	
	int i;

	for (int i = 0; i < 10; i++) {
		printf("i: %d\n", i);

	}

	int sum = 0; // sum �ʱ�ȭ (������Ű�� ����� ���� ������ �ʱ�ȭ �ʼ�!)

	for (int i = 1; i < 11; i++) {
		printf("i: %d\n", i);
		sum += i;
	}
	printf("1 ~ 10���� ���� %d�Դϴ�.", sum);

	return 0;
}