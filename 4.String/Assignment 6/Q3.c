#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    int len;
    printf("enter string:\n");
    scanf("%s",name);
    len = strlen(name);
    printf("length of string is:%d",len);
    return 0;
} 