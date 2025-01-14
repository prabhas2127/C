#include<stdio.h>
int main(){
    char a[5]={'a','b','a','d','a'},search;
    int i,count=0;

    printf("enter char search:\n");
    scanf("%c",&search);


    for(i=0;i<=4;i++){
        if(a[i]==search){
            count++;
        }
    }
    printf("count is %d",count);
    return 0;
}