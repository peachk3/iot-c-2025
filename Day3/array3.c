#include <stdio.h>
/* ���� �迭 */
int main() {

	char str[100] = "banana";
	char str2[5] = "apple";
	char str3[6] = "apple";
	// => ���ڿ� ���� null ���� �ʿ� -> +1��ŭ �� ���������� 
	char str4[7] = {'o', 'r', 'a', 'n', 'g', 'e'}; 
	char str5[4];
	str5[0] = 'a';
	str5[1] = 'b';
	str5[2] = 'c'; str5[3] = '\0';

	printf("str: %s\n", str);
	printf("str2: %s\n", str2); // -> str2: apple����������������������?< 
	printf("str3: %s\n", str3); //apple
	printf("str4: %s\n", str4); 
	printf("str4[6]: %s\n", str4[6]);
	printf("str5: %s\n", str5);
	printf("str������ ��: %s\n", str[10]);

	//str = str3; ���Ұ�
	strcpy(str, str3); // str�� str3�� ����
	printf("str: %s\n", str); // apple

	strcpy(str, "dog");
	printf("str: %s\n", str); // dog

	str[0] = 'D'; // ���ڿ��� "", ���ڴ� ''
	printf("str: %s\n", str); // Dog

	return 0;
}