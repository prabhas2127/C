#include<stdio.h>
void read(int *a);
int main(){
    int a[5],i,*pa;
    pa = a;
    
    printf("enter array elemets:");
    for(i = 0;i<5;i++){
        scanf("%d",&pa[i]);
    }
    read(pa);
    printf("sorted array element is:");
    for(i = 0;i<5;i++){
        printf("%d",pa[i]);
    }
    
}
void read(int *a){
    int i,j,t;
    for ( i = 0; i <= 3; i++)
    {
        for(j = i+1;j <= 4;j++){

            if (a[i] > a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    
}