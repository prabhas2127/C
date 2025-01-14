#include<stdio.h>
int main(){
    int x,sq;
read:
    printf("enter no:");
    scanf("%d",&x);
    if(x<0)
        goto read;
    else
        sq = x * x;
        printf("square is:%d",sq);
    return 0;

}