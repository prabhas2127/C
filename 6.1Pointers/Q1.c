//declare pointer to integer access the value of variable using pointer variable
#include<stdio.h>
int main(){
    int a = 10,*pa;
    pa = &a;
    printf("value of a is %d\n",*pa);
    printf("address of a value is%p", pa);
    return 0;
}