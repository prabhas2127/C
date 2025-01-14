#include<stdio.h>
int read(){
    int x;
    printf("accept no: ");
    scanf("%d",&x);
    return x;
    
}
int power(int x, int y) {
    int pow = 1; // Initialize the result
    for (int i = 0; i < y; i++) {
        pow *= x; // Multiply x, y times
    }
    return pow; // Return the computed power
}
void print(int p){
    printf("Power of two numbers is:%d\n",p);

}

void main(){
    int x,y,result;
    x = read();
    y = read();
    result = power(x,y);
    print(result);
    
    return 0;



}