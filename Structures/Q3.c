/*define structure for student define rollno,name,marks array for storing 3 subjects 
marks total and avg accept details of 3 student and print
*/

#include<stdio.h>
#include<string.h>
typedef struct 
{
    int r1;
    char n1[30];
    float a1;
}student;

int main(){
    student s1[3];
    int i;

    for(i = 0;i<3;i++){
        printf("enter rollno,Name and avg for student %d\n",i+1);
        scanf("%d%s%f",&s1[i].r1,s1[i].n1,&s1[i].a1);

    }

    printf("student data is \n");
    printf("rollno\tname\tavg\n");
    for(i = 0;i<3;i++){
        printf("%d\t%s\t%f\n",s1[i].r1,s1[i].n1,s1[i].a1);
    }
    return 0;
}
