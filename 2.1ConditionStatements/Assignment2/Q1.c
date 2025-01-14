#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two no\n");
    scanf("%d%d",&a,&b);
    if(a<b){
        printf("a is min");
    }    
    else{
        printf("b is minimum");
    }
    return 0;
}