#include<stdio.h>
int main()
{
    int n;
    printf("Enter weekday no:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("sunday");
        break;
    
    default:
        printf("error");
        break;
    }
}