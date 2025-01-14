//calculate area of circle using pointer to float
#include<stdio.h>
int main(){
    float pi = 3.14,area,radius,*ap,*rp,*p;
    printf("enter radius:");
    scanf("%f",&radius);
    p = &pi;
    ap = &area;
    rp = &radius;

    *ap = *p * *rp * *rp;
    printf("area of circle is:%f",*ap);
}