#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	�Լ� ������ 
	- �Լ� �̸� = ���� �ּ�
	- �Լ� �̸� = ������
*/
int sum(int, int);
int minus(int, int);
int mul(int, int);
void func(int(*fp)(int, int));

int main() {
	
	// �Լ� ������ ���� (�Է��� 2�� ����� 1����)
	//int (*fp)(int, int); 
	int result;
	//result = sum(20, 10);
	//result = minus(20, 10);
	//fp = sum; // �Լ� �����Ϳ� �Լ� �̸�(�ּ�) ����
	//result = fp(20, 10); 
	//printf("result: %d\n", result);

	/*printf("�����ȣ�� �Է��ϼ���: ");
	scanf("%s", &fp);*/

	int a = 10, b = 20;

	void func(int(*fp)(int, int));
	//int (*fp)(int, int) = sum;
	//result = fp(a, b);
	printf("���: %d\n", result);

	return 0;
}

int sum(int a, int b) {
	int result = a + b;
	return result;
}

int minus(int a, int b) {
	int result = a - b;
	return result;
}

int mul(int a, int b) {
	int result = a * b;
	return result;
}

/*
*  �� ��, �����ڸ� �Է¹޾� ����ϴ� �Լ� �����
*/

void func(int(*fp)(int, int)) {
	printf("���� 2���� �Է��ϼ���: ");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("�Է��� ���� %d %d\n", a, b);

	//int (*fp)(int, int) = sum;
	//result = fp(a, b);
}