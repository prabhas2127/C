#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    char b[10];
    printf("Enter String:\n");
    scanf("%s",a);

    strcpy(b,a);
    
    printf("this is string %s\n", a);
    printf("copy string %s\n", b);
    return 0;
} 
