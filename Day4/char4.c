#include <stdio.h>

void myStrInput(char*, int);

int main() {

	char str[100];		 // ���ڿ��� ������ �迭
	
	myStrInput(str, 100);	

	printf("�Է��� ���ڿ�: %s\n", str);

	return 0;
}

void myStrInput(char* ps, int size) {

	int i = 0;
	while (1) {
		ps[i] = getchar(); // �� ���ھ� �Է¹���
		if (ps[i] == '\n' || i >= (size - 1)) break; // ���๮�ڰ� �Էµǰų� �迭�� ���� �����ϸ� ����
		i++; 
	}
	ps[i] = '\0'; // ���ڿ��� ���� ǥ���ϴ� NULL����

}