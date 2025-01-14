#include<stdio.h>
int main(){
    char a[10];
    int i,status=1;
    
    printf("enter string:");
    scanf("%s",a);
    for ( i = 0; a[i]!='\0' ; i++)
    {
            if(a[i]>=42 && a[i]<=57){
                status = 0;
                break;
            }
    }
        
    
    if(status == 0){
        printf("it is number");
    }
    else{
        printf("it is string");
    }
    return 0;
}
