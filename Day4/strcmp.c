#include <stdio.h>
/*
	strcmp - ���ڿ� �� �Լ�
*/
int main() {

	char str[100] = "apple";
	char str2[100] = "orange";

	// ���������� �ڿ� ���� ���ڿ� ����ϱ�!!
	// str�� �������� ���� ������ -1 ��ȯ, str2�� ���� ������ 1 ��ȯ, ������ 0�� ��ȯ
	if (strcmp(str, str2) > 0) { // -1 > 0 -> else => orange ���
		printf("%s\n", str);  // str2�� ���� ������ str ���
	}
	else printf("%s\n", str2); // 0���� �۰ų� 0�� ��� str2 ��� 

	printf("a: %d\n", 'a');
	printf("b: %d\n", 'b');


	//strncmp(str, str2, 3);
	//printf("%s\n", str);


	return 0;
}
