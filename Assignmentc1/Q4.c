#include<stdio.h>
int main(){
    int i,num,prime;
    
    printf("Prime numbers between  1 and 50 are:\n" );
    for(num = 2;num <= 50;num++){
        prime = 1;
        for( i = 2;i * i <=num;i++){
            if(num % i == 0){
                prime = 0;
                break;
            }
        } 
        if(prime){
            printf("%d ",num);
        } 
    }
    printf("\n");
    return 0;
        
        
}