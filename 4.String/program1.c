#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i, len1,len2,status=1;
    
    printf("enter string1");
    scanf("%s",a);
    
    printf("enter string2");
    scanf("%s",b);
    
    for(len1=0;a[len1]!='\0';len1++);    
    for(len2=0;a[len2]!='\0';len2++);
    if(len1==len2){
        for(i=0;i<len1;i++){
            if(a[i]!=b[i]){
                status=0;
                break;

            }
        }
    }
    if(status == 0){
        printf("string is not equal");
    }
    else{
        printf("equal");
    }
}