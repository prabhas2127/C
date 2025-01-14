//
#include<stdio.h>
void swap(int *,int *);
int main(){
    int a,b,*pa,*pb;
    pa = &a;
    pb = &b;
    printf("enter 2 numbers:");
    scanf("%d%d",pa,pb);
    printf("before swapping elements is %d %d\n",*pa,*pb);
    swap(pa,pb);
    printf("after swapping elements is %d %d",*pa,*pb);
    return 0;
}
void swap(int *x,int *y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
}