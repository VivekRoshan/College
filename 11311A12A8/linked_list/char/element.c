/*Name:S.Vivek Roshan                             Date:
Class:IT F2                                       Roll:11311A12A8  
 * element.c*/
#include<stdio.h>
#include<stdlib.h>
#include"element.h"     //including the element.h header file
char readelement()
{
        elementtype x;   //function to read the element
        printf("enter the character");
        scanf("%s",&x);     //reading the element
        return x;
}
void showelement(elementtype x)     //function to show the element
{
        printf("\t%5c\n",x);
}

