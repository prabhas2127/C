//define pointer to 2D array and print elements of array
#include<stdio.h>
int main(){
    int a[3][3],i,j,*ptr;
    ptr=&a[0][0];
    printf("enter array:");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",ptr +(i*3+j) );

            
        }
    }
     for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d\t",*(ptr + (i * 3 + j)));
            
            
        }
        printf("\n");
    }
}