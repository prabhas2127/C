#include<stdio.h>
int main(){
    char a[5] = {'a','b','c','d','e'};
    int i;
    for(i=0;i<5;i++){
        a[i] = a[i] - 32;//lower to upper case -32 and upper to lower need to +32
    }
    printf("Lower to Upper is:\n");
    for(i=0;i<5;i++){
        printf("%c ",a[i]);
    }
    return 0;
}