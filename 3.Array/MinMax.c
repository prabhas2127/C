#include<stdio.h>

int main(){

    int a[6], val, min_val, max_val;

    printf("enter array elements : \n");

    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }

    printf("input array : \n");
    for(int i=0;i<6;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    printf("enter a ref value : ");
    scanf("%d",&val);

    min_val = a[0];
    max_val = a[0];

    for(int i=0;i<6;i++){
        if(a[i] < min_val){
            min_val = a[i];
        }
        if(a[i] > max_val){
            max_val = a[i];
        }
    }

    printf("minimum value among the array : %d\n", min_val);
    printf("maximum value among the array : %d\n", max_val);

    return 0;

}

