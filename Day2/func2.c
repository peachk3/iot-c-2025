#include <stdio.h>
/* �Լ�
	- �Է��� �ִ� �Լ�
	void func(�Ű�����){
		
	}
*/
void func(int a, int b) {		// �Ű�����
	printf("void func(a, b)\n");
	printf("a + b : %d\n", a + b);
}
int main() {

	func(10, 20);		// ���μ�
	return 0;
}