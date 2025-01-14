#include<stdio.h>
int main(){
    int a=10,*pa,**x;
    char b='a',*pb,**y;
    float c=10.24,*pc,**z;
    //store adress of variable to pa using & operator
    pa=&a;
    pb=&b;
    pc=&c;

    x=&pa;
    y=&pb;
    z=&pc;
    
    //print value of variables using * 
    printf("value of pa is%d\n",pa);
    printf("value of pb is%d\n",pb);
    printf("value of pc is%d\n",pc);

    printf("value of pa is%d\n",x);
    printf("value of pb is%d\n",y);
    printf("value of pc is%d\n",z);


    printf("value of pa is%d\n",*x);
    printf("value of pb is%d\n",*y);
    printf("value of pc is%d\n",*z);

    printf("value of pa is%d\n",**x);
    printf("value of pb is%d\n",**y);
    printf("value of pc is%d\n",**z);



}