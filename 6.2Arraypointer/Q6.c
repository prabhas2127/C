//perform all string manipulations using pointer to char array(length,compare,copy,concatenate)
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],*pa,*pb;
    int ch,len,len1,w,*l1,*l2,*pch;
    pa = a;
    pb = b;
    l1 = &len;
    l2 = &len1;
    pch = &ch;
    do{
        printf("1.string length.\n2.string campare.\n3.string copy.\n4.string concatenate.\n");
        printf("enter string 1:\n");
        scanf("%s",pa);
        printf("enter string 2:\n");
        scanf("%s",pb);
        printf("enter your choice:\n");
        scanf("%d",pch);
        
        switch  (*pch)
        {
        case 1:
            *l1 = strlen(pa);
            *l2 = strlen(pb);
            printf("length of string 1 is: %d\n", *l1);
            printf("length of string 1 is: %d\n", *l2);
            break;

        case 2:
            *l1 = strcmp(pa,pb);
            if(*l1 == 0){
                printf("strings are equal\n");
            }
            else
            {
                printf("strings are not equal\n");
            }
            break;
        case 3:
            strcpy(pb,pa);
    
            printf("copied string (string2) is : %s\n",pb);
            break;
        
        case 4:
            strcat(pa,pb);
            printf("concatenated string is: %s\n",pa);
            break;
            
        default:
            printf("invalid choice\n");
            break;

        }
        printf("do you want to continue? press 1 for yes or 0 for no: ");
        scanf("%d",&w);

    
    }while (w == 1);
    
    return 0;
    
}