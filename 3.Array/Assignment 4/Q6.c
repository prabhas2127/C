#include<stdio.h>
int main(){
    int a[5],i,max,min;
    max=a[0];
    min=a[0];
    printf("enter values:");
    //accept 5 elements
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    //print array
    printf("array is:");
    for (i = 0; i < 5; i++)
    {
        
        printf("%d  ",a[i]);
    }
    for (i = 1;i<=4;i++){
        if (a[i]<min){
            min = a[i];
        }
        if (a[i]>max){
            max = a[i];
        }
        printf("max is %d",max);
        printf("min is %d",min);

    }
}