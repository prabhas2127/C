#include<stdio.h>
int main(){
    int a=10,*pa;
    char b='a',*pb;
    float c=10.24,*pc;
    //store adress of variable to pa using & operator
    pa=&a;
    pb=&b;
    pc=&c;
    
    //print value of variables using * 
    printf("value of a is%d\n",*pa);
    printf("value of a is%c\n",*pb);
    printf("value of a is%f\n",*pc);
    
    
    //Acess address of variable using %p and %d
    
    printf("value of pa is %d\n",pa);
    printf("value of pa is %d\n",pb);
    printf("value of pa is %d\n",pc);

    /*
    %p it will store address like this:
    value of pa is 0x7fffffffd828
    value of pa is 0x7fffffffd827
    value of pa is 0x7fffffffd82c

    %d it will store address like this:
    value of pa is -10200
    value of pa is -10201
    value of pa is -10196
   */
    return 0;
}