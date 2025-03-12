#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n = 30;
	int res;

	// ��ǻ�� 0(false)�� �������� ��� 
	res = (n > 10) && (n < 20); 
	printf("res: %d\n", res); // 0 = false
	res = (n < 10) || (n > 20); 
	printf("res: %d\n", res); // 1 = true
	res = !(n >= 30); // >= ���մ��Կ����� | ! ���������� 
	printf("res: %d\n", res); // 0

	res = ~n; // ~ ��Ʈ���� ����������
	printf("res: %d\n", res); // -31

	res = n << 1; // �½���Ʈ (�̵��� ������ �� �ڸ� 0���� ä��)
	printf("res: %x\n", res); // 3c (16����) 60(10����)

	res = res >> 1; // �����Ʈ (�̵��� ���� �� �ڸ� ��ȣ��Ʈ�� ä��)
	printf("res: %x\n", res); // 1e (16����) 30(10����)

	int n2 = 143;		// 0b 1000 1111 

	res = n2 << 1;		// 0b (000)1 0001 1110  
	printf("res: %x\n", res);

	res = n2 >> 1; 		// 0b 0100 0111
	printf("res: %x\n", res); // 47

	// ! int�� char ����Ʈ ����� �ٸ� ��� ���� �� ����!!

	return 0;
}

// ��ȣ��Ʈ
// 0:���