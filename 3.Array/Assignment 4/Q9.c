#include<stdio.h>
int main(){
    char a[5] = {'a','b','c','d','e'};
    char b[5] = {'f','g','h','i','j'},c[10];
    int i,j;
    for(i=0;i<=4;i++)
    {
       c[i] = a[i];
    }
    for(j=0;j<=4;i++,j++){
        c[i] = b[j];
    }
    for(i=0,j=0;i<10;i++,j++){
        printf(" %c ",c[i]);
    }
    return 0;
}