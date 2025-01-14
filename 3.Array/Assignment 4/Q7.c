#include<stdio.h>
int main(){
    int a[5],i,j,t;
    printf("enter values:");
    //accept 5 elements
    for(i=0;i < 5;i++){
        scanf("%d",&a[i]);
    }
    //print array
    /*
    printf("array is:");
    for (i = 0; i < 5; i++)
    {
        printf("%d  ",a[i]);
    }*/
    for (i = 0;i<=3;i++)// n-2 means 5-2=3 times condition check
    {
        for(j = i+1;j <= 4;j++) //n-1   5-1=4 times condition check
        {
            if (a[i] > a[j])
            {
                t = a[i];  //swap
                a[i] = a[j];
                a[j] = t;

            }
        }
    } 
    printf("ascending order list:");
    for(i=0;i < 5;i++){
        printf("%d ",a[i]);
    }
    return 0;

}