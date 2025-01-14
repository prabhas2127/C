#include<stdio.h>
#include<string.h>
int main(){
    char s[10];
    int i,j,len,status = 1;
    printf("enter string");
    scanf("%s",s);
    len = strlen(s);
    for(i=0,j=len-1;i<j;i++,j--)
    {
        if(s[i]!=s[j]){
            status = 0;
            break;
        }
    }
    if (status == 1){
        printf("string is  palindrome:%s",s);
    }
    else{
        printf("string is  not palindrome:%s",s);
    }
    return 0;
}