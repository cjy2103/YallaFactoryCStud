#include<stdio.h>
// 포인터 구조체 
struct PointNum
{
    int *a;
    int *b;
};

int main()
{

    struct PointNum num;
    
    void (*fp)();
    fp = printf("%d\n",Minus(num.a = 10, num.b = 5));
    fp = printf("%d\n",add(num.a = 50, num.b = 20));
    return 0;
}



int Minus(int a,int b){
    return a-b;
}

int add(int a, int b){
    return a+b;
}

