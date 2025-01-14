//write the program for pointer arithmetic
#include<stdio.h>
int main(){
    int a=10, *pa;
    char b='a', *pb;
    float c=10.14, *pc;

    pa=&a;
    pb=&b;
    pc=&c;

    printf("value of a is%u\n",pa);
    printf("value of b is%u\n",pb);
    printf("value of c is%u\n",pc);

    pa++;pb++;pc++;
    printf("After increment value of a is%u\n",pa);
    printf("After increment value of b is%u\n",pb);
    printf("After increment value of c is%u\n",pc);

    pa--;pb--;pc--;
    printf("After decrement value of a is%u\n",pa);
    printf("After decrement value of b is%u\n",pb);
    printf("After decrement value of c is%u\n",pc);


}