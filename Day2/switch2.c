#include <stdio.h>

int main() {

	printf("���� ���߱� ���� Start!\n");
	
	while (1) {

		int num = 3;
		int n = 0;

		printf("���ڸ� �Է��ϼ��� (1 ~ 5) : ");
		scanf_s("%d", &n);
		switch(n) {
		case 5:
			printf("Down!\n");
			break;

		case 4:
			printf("Down!\n");
			break;

		case 3:
			printf("����!");
			return 0;

		case 2:
			printf("Up\n");
			break;

		case 1:
			printf("Up\n");
			break;
		}
	}

}