#include <stdio.h>

int main() {
    int a = 10;
    int* p = &a;  // p�� a�� �ּҸ� �����ϴ� ������

    printf("a�� ��: %d\n", a);        // a�� ��
    printf("a�� �ּ�: %p\n", &a);     // a�� �ּ�
    printf("p�� ����Ű�� �ּ��� ��: %d\n", *p);  // p�� ����Ű�� �ּҿ� ����� �� (��, a�� ��)
    return 0;
}