#include<stdio.h>
void fun1(int,int,int *,int *,int *,float *);
int main()
{
    int a,b,add ,sub,mult;
    float div;

    printf("Enter Nos");
    scanf("%d%d",&a,&b);
    fun1(a,b,&add,&sub,&mult,&div);

    printf("add of is %d\n",add);
    printf("sub of is %d\n",sub);
    printf("mult of is %d\n",mult);
    printf("div of is %f\n",div);
    return 0;
    
}
void fun1(int x,int y, int *add, int *sub, int *mult, float *div)
{
    *add=x+y;
    *sub=x-y;
    *mult=x*y;
    *div=(float)x/(float)y;
}