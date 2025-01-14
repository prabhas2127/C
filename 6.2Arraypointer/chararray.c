#include<stdio.h>
int main(){
    char a[5],*pa;
    int i,len=0;
    pa=a;
    printf("array is:\n");
    
        scanf("%s",pa);
    
        for(pa = a;*pa!='\0';pa++,len++);
            
        //printf("address %u value is %d\n",pa,*pa);
        printf("len is %d\n",len);
    
    
    return 0;
}