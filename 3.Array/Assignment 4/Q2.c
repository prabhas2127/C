#include<stdio.h>
int main(){
    int a[5],i;
    printf("enter values:");
    //accept 5 elements
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    //print array
    printf("array is:");
    for (i = 0; i <= 4; i++)
    {
        printf("%d  ",a[i]);
    }
    printf("reverse array is:\n");
    //reverse array
    for (i = 4; i >= 0; i--)
    {
        printf("%d  ",a[i]);
    }
    return 0;
    

}