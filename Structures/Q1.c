//declare the structure for student define rollno,name,total and avg as members accept the data and print

#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[20];
    float avg;
};
int main(){
    struct student s1,s2,s3;

    s1.rollno = 10;
    strcpy(s1.name ,"ABC");
    s1.avg = 60.30;

    printf("rollno is%d\n",s1.rollno);
    printf("name is %s\n",s1.name);
    printf("avg is %.1f\n",s1.avg);

    printf("________________second record:______________________\n");

    s2.rollno = 11;
    strcpy(s2.name ,"pqr");
    s2.avg = 80.10;

    printf("rollno is%d\n",s2.rollno);
    printf("name is %s\n",s2.name);
    printf("avg is %.1f\n",s2.avg);

    //Accept data from user
    
    printf("enter third student roll no\n");
    scanf("%d",&s3.rollno);
    
    printf("enter third student name\n");
    scanf("%s",s3.name);
    
    printf("enter third student avg\n");
    scanf("%f",&s3.avg);

    printf("________________Third record:______________________\n");

    printf("rollno is%d\n",s3.rollno);
    printf("name is %s\n",s3.name);
    printf("avg is %.1f\n",s3.avg);

    printf("size of structure:%d\n",sizeof(s1));


    return 0;    
}
