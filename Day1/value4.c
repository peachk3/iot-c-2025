/* �迭 
	������ �ڷ����� ���������� ������ �� �ִ� ����
*/
# include <stdio.h>

int main() {

	char str[10] = "banana";		// ����Ÿ�� �迭���� str[���� ����]

	printf("str: %s\n", str);
	printf("str[0]: %c\n", str[0]); // �迭�� ù��° ���� ���
	printf("str[1]: %c\n", str[1]); 
	printf("str[5]: %c\n", str[5]); 
	printf("str[6]: %c\n", str[6]); // ����
	//printf("str[6]: %s\n", str[6]); // ���ڿ������� null���ڰ� ��

	// �迭�� ������ ���
	// �迭! -> for��!!
	char str2[6] = "apple"; // str2[5] -> ���ڿ� ���� null���ڰ� �� ���� ��� ��°��� �̻��ϰ� ����
	printf("str2: %s\n", str2); // apple //%s -> �迭�� �ּҿ� �ִ� ���� ���
	str2[0] = 'A';
	printf("str2: %s", str2); // Apple

	// �迭 �̸� = �迭�� ���� �ּ� (�迭�� 0���� �ּ�)
	// ���� �̸� != �迭�� �ּ�
	
	// ���������� �Է� ���� (for�� ����ؼ�)
	// str = str2; ��� �Ұ�


	return 0;
}