#include<stdio.h>
int main(){
    int a[5],i,sum;
    printf("enter values:");
    //accept 5 elements
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    //print array
    printf("array is:");
    for (i = 0; i < 5; i++)
    {
        sum += a[i]; 
    }
    printf("sum is:%d",sum);
    return 0;
    

}