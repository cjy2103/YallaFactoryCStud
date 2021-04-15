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

    printf("Struct 변수 a의 주소 %x\n",&test.a);
    printf("Struct 변수 b의 주소 %x\n",&test.b);
    printf("Struct 변수 c의 주소 %x\n",&test.c);
    printf("Struct 변수 d의 주소 %x\n",&test.d);

    return 0;
}