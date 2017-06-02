/*name:vivek roshan rollnum:11311A12A8
 * class:it f2 date:16/02/2012 
 * element.c*/
#include<stdio.h>
#include<stdlib.h>
#include"element.h"     //including the element.h header file
char readelement()
{
	elementtype x;   //function to read the element character type
	printf("enter the character");    
	scanf(" %c",&x);     //reading the element
	return x;
}
void showelement(elementtype x)     //function to show the element
{
	printf("\t %5c\n",x);   
}


