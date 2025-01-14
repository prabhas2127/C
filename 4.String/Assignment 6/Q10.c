#include<stdio.h>
#include<string.h>
int main(){
    char a[5][20];
    char t[20];

    int i,j;
    
    printf("Enter string:\n");
    for (i=0;i<5;i++){
        scanf("%s",a[i]);
    }
    for(i=0;i<=3;i++){
        for (j=i+1;j<=4;j++){
            if(strcmp(a[i],a[j])>0){
                strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
            }
        }
    }
    printf("sorted list is:\n");
    for (i=0;i<5;i++){
        printf("%s\n",a[i]);
    }

    return 0;

}