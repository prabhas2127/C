#include<stdio.h> // Q2 and Q8
int main(){
    int sub1,sub2,sub3,sum,avg;
    printf("Enter marks of three subjects:\n");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
    sum = sub1+sub2+sub3;
    avg = sum / 3;
    if (avg < 50){
        printf("Fail");
    }
    else if(avg>=50 && avg<60)
    {
        printf("Grade C");
    }
    else if(avg >= 60 && avg < 70){
        printf("Grade B");
    }
    else if(avg >=70){
        printf("Grade A");
    }

    return 0;
}