#include<stdio.h>
int main(){
    int a[5],i,max;
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
    printf("enter max value:\n");
    scanf("%d",&max);

    for (i = 0; i < 5; i++)
    {
        if(a[i] <= max){
            printf("min no :%d \n",a[i]);
        }
        else{
            printf("max no: %d\n",a[i]);
        }

        
    }
    

    return 0;
    

}