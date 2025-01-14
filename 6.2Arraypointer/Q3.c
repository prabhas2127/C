//sort the array using pointers
#include<stdio.h>
int main(){
    int a[5]={10,20,60,40,50},i,j,t,*pa,*pt;
    pa = a;
    pt = &t;
    
    


    for (i = 0;i<=3;i++)// n-2 means 5-2=3 times condition check
    {
        for(j = i+1;j <= 4;j++) //n-1   5-1=4 times condition check
        {
            if (pa[i] > pa[j])
            {
                *pt = pa[i];  //swap
                pa[i] = pa[j];
                pa[j] = *pt;

                

            }
            
        }
        
    } 
    printf("ascending order list:");
    for(i=0;i <=4;i++,pa++){
        printf("%d ",*pa);
    }
    return 0;

}