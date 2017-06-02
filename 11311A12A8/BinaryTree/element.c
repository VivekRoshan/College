#include<stdio.h>
#include<stdlib.h>
#include"element.h"

elementType readElement()
{
	elementType e;
	printf("enter an integer: ");
	scanf(" %d",&e);
	return e;
}

void showElement(elementType e)
{
	printf("\n\t%5d",e);
}

