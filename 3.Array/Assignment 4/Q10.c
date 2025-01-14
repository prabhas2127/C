#include<stdio.h>
int main(){
char a[5];
int i,j,count=0;
char vowels[10] ={'a','e','i','o','u','A','E','I','O','U'};

    printf("enter characters for array:\n");
    for(i=0;i<=5;i++){
        scanf(" %c ",&a[i]);
    }
    //print array
    printf("array is:");
    for (i = 0; i <= 5; i++)
    {
        
        printf("%c  ",a[i]);
    }

    for(i=0;i<=5;i++){
        for(j=0;j<=10;j++)
        {
        if(a[i] == vowels[j])
            count++;
        }
    }
    printf("count is %d",count);
    return 0;
}