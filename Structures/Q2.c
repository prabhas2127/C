//define the stucture for employee define empno,name,deptcode and salary.accept empdetails and print
#include<stdio.h>
#include<string.h>
struct employee
{
    int empno;
    char name[20];
    int dptcode,salary;
};
int main(){
    struct employee e1;

    e1.empno = 10;
    strcpy(e1.name ,"priya");
    e1.dptcode =1234;
    e1.salary=20000;

    
    printf("employee no is%d\n",e1.empno);
    printf("employee name  is %s\n",e1.name);
    printf("dptcode is %d\n",e1.dptcode);
    printf("salary is %d\n",e1.salary);

    return 0;
}