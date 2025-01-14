#include<stdio.h>

int read();
int fact(int);
void print(int,int);

int read(){
    int x;
    printf("accept no: ");
    scanf("%d",&x);
    return x;
}
int fact(int pa){
    int fa = 1;
    while (pa >= 1)
    {
        fa = fa * pa;
        pa--;
    }
    return (fa);
    
}
void print(int fa,int pa){
    printf("Factorial %d is:%d",fa,pa);
}
int main(){
    int a,f;
    a= read();
    f = fact(a);
    print(a,f);
}



