/*Name:S.Vivek Roshan 
*Class:IT F2                                 Date:15/03/2012
 * element.c*/
#include<stdio.h>
#include<stdlib.h>
#include"element.h"     //including the element.h header file
elementtype readelement()
{
        elementtype x;   //function to read the employee structure
        printf("enter the employee id");
        scanf("%d",&x.empID);
        printf("enter the name");
        scanf("%s",x.name);     //reading the element
        printf("enter the salary");
        scanf("%f",&x.salary);
        return x;
}
void showelement(elementtype x)     //function to show the employee structure
{
        printf("employee id is %5d\n",x.empID);
        printf("employee name is %5s\n",x.name);
        printf("employee salary is %5f\n",x.salary);
}

