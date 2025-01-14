#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b[10];
    int c=0;
    printf("enter  first string:\n");
    scanf("%s",a);
    printf("enter string:\n");
    scanf("%s",b);
    c = strcmp(a,b);
    if (c == 0){
        printf("equal");
    }
    else{
        printf("Not equal");

    }
    return 0;
   
} 