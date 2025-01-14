#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    char b[10];
    char c[20];
    int i,j;
    printf("Enter String:\n");
    scanf("%s",a);
    printf("Enter String:\n");
    scanf("%s",b);
    
    for(i=0;a[i]!='\0';i++)
    {
       c[i] = a[i];
    }
    for(j=0;b[j]!='\0';i++,j++){
        c[i] = b[j];
    }
    c[i]='\0';
    printf("%s",c);
    return 0;
    
} 
