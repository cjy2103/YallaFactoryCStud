#include<stdio.h>

union ubox
{
    int a;
    unsigned char arr[4];
}UBox;
 
int main()
{
    int i;
    unsigned char temp;
    UBox.a = 0x12345678;
     
    printf("리틀엔디안 : 0x"); //리틀엔디안 형식 출력
    for(i=0; i<4; i++)
        printf("%x", UBox.arr[i]);
    printf("\n");
     
    for(i=0; i<2; i++) //메모리 내용 swap
    {
        temp=UBox.arr[i];
        UBox.arr[i]=UBox.arr[3-i];
        UBox.arr[3-i]=temp;
    }
     
    printf("빅엔디안 : 0x");
    for(i=0; i<4; i++)
        printf("%x", UBox.arr[i]);
    printf("\n");
     
    return 0;
}