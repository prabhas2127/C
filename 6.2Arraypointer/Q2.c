//copy one array to other array using pointer to array
#include<stdio.h>
int main(){
    int arr[5] = {10,20,30,40,50},barr[5],*a,*b,i,j;
    a = arr;
    b = barr;
    for(i = 0;i<=4;i++,a++,b++){
    
            *b = *a;
        
    }
    b = barr;
    for (i = 0; i <=4; i++,b++)
    {
        printf("%d\t",*b);
    }
    printf("\n");
    
    return 0;
}