#include<stdio.h>
void charfun(int *,int *,char *,char *);
int main(){
    char a[100],b[100];
    char *ac,*pb;
    int len,len1;
    ac = a;
    pb = b;
    
    printf("enter string1 :");
    scanf("%s",a);
    printf("enter string 2:");
    scanf("%s",b);
    charfun(&len,&len1,ac,pb);
    printf("length of string 1 is: %d\n", len);
    printf("length of string 1 is: %d\n", len1);
    printf("copied string (string2) is : %s\n",pb);
    printf("concatenated string is: %s\n",ac);
    return 0;
}
void charfun(int *x,int *y,char *pa,char *pb){
    *x = strlen(pa);
    *y = strlen(pb);
    strcpy(pb,pa);
    strcat(pa,pb);
}