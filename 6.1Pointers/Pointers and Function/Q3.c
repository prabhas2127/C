#include<stdio.h>
void circumference(float *,float *);
int main(){
    float r,area,*pr,*pa;
    pa = &area;
    pr = &r;
    printf("enter radius of circle:");
    scanf("%f",pr);
    circumference(pr,pa);
    printf("area of circle cirmcumference is:%f",*pa);
    return 0;
}

void circumference(float *r,float *area){
  
    *area = 2 * 3.14 * *r;
}