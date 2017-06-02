/*name:vivek roshan rollnum:11311A12A8
 * class:it f2 date:16/02/2012 
 * element.c*/
#include<stdio.h>
#include<stdlib.h>
#include"element.h"     //including the element.h header file
elementtype readelement()
{
	elementtype x;   //function to read the element
	printf("enter the rollnumber");
	scanf("%d",&x.rollno);
	printf("enter the name:");
	scanf("%s",x.name);
	printf("enter the marks");
	scanf("%f",&x.marks);         //reading the element structure
	return x;
}
void showelement(elementtype x)     //function to show the element
{
	printf("rollno is %d\n",x.rollno);
	printf("name is %s\n",x.name);
	printf("marks are %f\n",x.marks);
	putchar('\n');   
}


