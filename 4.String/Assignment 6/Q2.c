#include<stdio.h>
int main()
{ 
    char name[10],addr[15],city[10];
    printf("enter your name:");
    scanf("%s",name);
    printf("enter your address:");
    scanf("%s",addr);
    printf("enter city:");
    scanf("%s",city);
    printf("name:%s\n", name);
    printf("address:%s\n", addr);
    printf("city:%s\n", city);
    return 0;
}
