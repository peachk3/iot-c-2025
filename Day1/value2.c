#include <stdio.h>

int main() {

	char ch = 0; // 1����Ʈ ���� -> -128 ~ 127 (���� ����)
	// = (signed) char ch = 0; 
	unsigned char ch2 = 0; // 0 ~ 255 (����� -> unsigned �߰�)

	unsigned int num;
	num = 123456;
	printf("num : %d\n", num);
	num = -1;
	printf("num: %d\n", num);
	printf("num: %u\n", num);

	// ��ǻ�� ����
	// 7 - 3 = 4
	// => 3�� ���� 7 -> 7 + 7 = 14 / => 10���� 4!
	// 4 - 1 = 3
	// => 1�� ���� 9 -> 9 + 1 = 10 / => 10���� 3!

	return 0;
}