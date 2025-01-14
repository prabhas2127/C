# include <stdio.h>
int main(){
    int math = 67,sci = 89, eng = 90, sum;
    float avg;
    sum = math + sci + eng;
    avg = (float)sum / 3;
    printf("Sum of three subjects is:%d\n",sum);
    printf("Average of marks is:%f\n",avg);
    return 0;
}