#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* scanf, gets() ���� ����
* stdin - ǥ�� �Է� ����(�Է� ��Ʈ��)
*/

int main() {

	char str[100];

	/* scanf */
	//printf("���ڿ� �Է� > "); // ���ڿ� ���� ���� �Է½� ���� ���� ���ڿ��� ���
	//scanf("%s", str); // ����, ��, ���� -> �� ���� ���ڿ��� ��µ�
	//
	//printf("���ڿ�(scanf): %s\t", str); // ���� ���� ���ڿ��� ���
	//scanf("%s", str);
	//printf("���ڿ�(scanf): %s", str); // ���� ���� ���ڿ��� ���

	/* gets */
	//printf("������ ������ �Է� > "); 
	//gets(str);
	//printf("�Է� ���� ���ڿ�(gets): %s", str); // ���� ���Ե� ���ڿ� ��µ�

	/* fgets */ 
	printf("������ ������ �Է� > ");
	fgets(str, sizeof(str), stdin); // stdin(ǥ�� �Է�)���κ��� ���ڿ��� �Է¹޾Ƽ� �迭 str�� �����ϵ�, 
									// sizeof(str)�� ���̸�ŭ �����϶�!
	printf("�Է� ���� ���ڿ�(fgets): %s", str); // ���� ���Ե� ���ڿ� ��µ�

	return 0;
}