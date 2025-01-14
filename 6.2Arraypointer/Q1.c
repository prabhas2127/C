//declare pointer array.calculate sum of all elements
#include<stdio.h>
int main(){
    int a[5],*pa,i,sum=0;
    printf("array is:\n");
    for(pa = a,i == 0;i<5;i++,pa++){
        scanf("%d",pa);
    }
        for(pa = a,i = 0;i<5;i++,pa++){
        printf("address %u value is %d\n",pa,*pa);
        sum=sum+ *pa;
    }
    printf("sum is %d\n",sum);
    return 0;
}