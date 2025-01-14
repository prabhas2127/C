//swap two numbers using pointer variable
#include<stdio.h>
int main(){
    int a = 10,b = 20,*pa,*pb;
    pa = &a;
    pb = &b;
    *pa = *pa + *pb;
    *pb = *pa - *pb;
    *pa = *pa - *pb;
    printf("numbers of a = %d\n",*pa);
    printf("numbers of b = %d\n",*pb);
    return 0;
}