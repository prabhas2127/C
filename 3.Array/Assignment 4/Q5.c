#include<stdio.h>
int main(){
    int a[5],b[5],c[5],i;
    printf("enter values for A:");
    //accept 5 elements
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter values for B:");
    //accept 5 elements
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    //print array
    printf("array is:");
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i]; 
        printf("%d ",c[i]);
    }
    
    return 0;
    

}