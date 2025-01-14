#include<stdio.h>
int main(){
    int i,j;
    int a[3][3],b[3][3],c[3][3];
    printf("enter elements for array A{3x3}:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
        
            scanf("%d",&a[i][j]);
        }
        
        printf("\n");
        
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
        
            printf("%d\t",a[i][j]);
        }
        
        printf("\n");
        
    }
    printf("enter elements for array b {3x3}\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
        
            scanf("%d",&b[i][j]);
        }
        
        printf("\n");
        
    }
     for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
        
            printf("%d\t",b[i][j]);
        }
        
        printf("\n");
        
    }
    printf("Addition of array is:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
        
            c[i][j] = a[i][j] + b[i][j];
        }
        
        printf("\n");
        
    }
     for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
        
            printf("%d\t",c[i][j]);
        }
        
        printf("\n");
        
    }
    
}
    

    
