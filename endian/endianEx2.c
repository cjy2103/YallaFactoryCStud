#include<stdio.h>
#include<string.h>

 
int main()
{
    char a[4];
    int b = 100;
    int length = sizeof(a);

    // for(int i=0;i<4;i++){
    //     a[i] =b;
    // }

    memcpy(&a[0], &b, sizeof(b));
    
    for(int i=0; i<4; i++)
    {
        printf("\n a[%d] = %x", i, a[i]);
    }

    printf("\n shortint size = %d", sizeof(short int));
    printf("\n unsigned char size = %d", sizeof(unsigned char));


    return 0;
}