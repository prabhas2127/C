#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b[10];
    int ch,len,len1,w;
    do{
    printf("1.string length.\n2.string campare.\n3.string copy.\n4.string concatenate.\n");
    printf("enter string1:\n");
    scanf("%s",a);
    printf("enter string2:\n");
    scanf("%s",b);
    printf("enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1 :
        len = strlen(a);
        len1 = strlen(b);
        printf("length of string is:%d\n",len);
        printf("length of string is:%d\n",len1);
        break;

    case 2 :
        len = strcmp(a,b);
        if (len == 0){
            printf("equal\n");
        }
        else{
            printf("Not equal\n");
        }
        break;

    case 3 :
        strcpy(b,a);
        printf("this is string %s\n", a);
        printf("copy string %s\n", b);
        break;

    case 4 :
        printf(strcat(a,b));
        break;
    
    default:printf("Invalid");
            break;
    }
    
    
    printf("do you want to continue print 1 or 0:\n");
    scanf("%d",&w);
    }
    while (1);
    return 0;
    

}