#include<stdio.h>
#include<stdlib.h>
#include"element.h"

elementType readElement()
{
	elementType x;
	printf("enter an integer: ");
	scanf(" %d",&x);
	
	return x;
}

void showElement(elementType x)
{
	printf("%5d\n",x);
}

