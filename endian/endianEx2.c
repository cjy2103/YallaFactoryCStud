#include<stdio.h>
#include<string.h>

 
int main()
{
    char a[4];
    int b = 100;
   

    memcpy(a,&b,sizeof(int));

    for(int i=0;i<4;i++){
        printf("a[%d]의 주소 : %x\n",i,&a[i]);  // 작은수 -> 큰수 순으로 주소 번지가 올라감 -> Little Endian 방식 
    }


    return 0;
}