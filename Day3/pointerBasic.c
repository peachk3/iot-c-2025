#include <stdio.h>

int main() {
    int a = 10;
    int* p = &a;  // p는 a의 주소를 저장하는 포인터

    printf("a의 값: %d\n", a);        // a의 값
    printf("a의 주소: %p\n", &a);     // a의 주소
    printf("p가 가리키는 주소의 값: %d\n", *p);  // p가 가리키는 주소에 저장된 값 (즉, a의 값)
    return 0;
}