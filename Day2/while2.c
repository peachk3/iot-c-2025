#include <stdio.h>
/* while��
	while (���ǽ�) {
		�ݺ��� ���๮
	}
*/
int main() {

	// �ȳ��ϼ��� 5�� ���
	int i = 0;
	while (i < 5) {
		printf("�ȳ��ϼ���!. %d\n", i + 1); 
		i++;
	}
	
	// 1 ~ 100 ��� / sum ���ϱ�
	i = 0;
	int sum = 0;
	while (i < 100) {
		printf("%d\n", i + 1);
		i++;
		sum += i;
		printf("sum = %d\n", sum);
	}

	return 0;
}