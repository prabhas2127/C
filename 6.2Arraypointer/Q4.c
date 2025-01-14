//search element in array using pointer
#include<stdio.h>
int main(){
    int a[5] ={10,20,30,40,50},*pa,i,*s, search;
   
    pa = a;
    s = &search;


    printf("enter element to  search:\n");
    scanf("%d",s);


    for(i == 0;i<=4;i++,pa++){
        if(*pa == *s){
            printf("element found at %u is %d",pa,*pa);
        }
    }
    
    return 0;
}
 