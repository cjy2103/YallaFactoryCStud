#include<stdio.h>

   struct Struct
    {
        int a;  // 4바이트
        int b;  // 4바이트    
        char c;  // 1바이트
        double d;  // 8바이트
        
    };



int main(){

    struct Struct test;

    printf("Struct의 사이즈 : %d\n", sizeof(test));
    printf("a의 사이즈 : %d\n", sizeof(test.a));
    printf("b의 사이즈 : %d\n", sizeof(test.b));
    printf("c의 사이즈 : %d\n", sizeof(test.c));
    printf("d의 사이즈 : %d\n", sizeof(test.d));

    return 0;
}