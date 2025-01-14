#include<stdio.h> //Nested if
int main(){
    int a,b,c;
    printf("enter 3 nos.\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c)
            printf("a is maximum");
        else
            printf("c is Max");
    }
    else{
        if(b>c)
            printf("b is max");
        else
            printf("c is max");
    }
    return 0;
}