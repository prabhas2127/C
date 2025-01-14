//create a program to explain chain of pointers
#include<stdio.h>
int main(){
    int a=20, *pa, **x;
    pa=&a;
    x=&pa;
    printf("value of a is%d\n ",*pa);

    printf("value of pa that is address of a%d \n",*x);


    printf("value of a is%d\n ",**x);

    
    printf("address of a is%d\n ",pa);

    printf("address of pa is%d\n ",x);
}