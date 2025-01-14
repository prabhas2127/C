#include<stdio.h>
int main(){
    int a[5] ={10,20,30,40,50},*pa,i;
    printf("array is:\n");
    for(pa = a,i = 0;i<5;i++,pa++){
        printf("address %u value is %d\n",pa,*pa);
    }
    printf("address %u value is %d\n",pa,*pa);
    return 0;
}