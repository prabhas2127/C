#include<stdio.h>
int main()
{
    int a[5],s,i;
    printf("enter arry");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    s=sum(a);
}
int sum(int pa[])
{
    int i,s=0;
    for(i=0;i<5;i++)
        s= s + pa[i];
    return s;
    
}