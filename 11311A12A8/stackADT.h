/*name:vivek roshan roll:11311A12A8 
 * class:it f2 date:16/02/2012 
 * stackADT.h*/
#include<stdio.h>
#include<stdlib.h>
#include"element.h"       //including the element.h
struct stack               //structure of the stack
{
	int maxsize;       //members
	int top;
	elementtype *stackelement;
};                                  //all the prototypes
struct stack createstack(int m); 
void initstack(struct stack *s);
int empty(struct stack *s);
int full(struct stack *s);
void push(struct stack *s,elementtype e);
elementtype pop(struct stack *s);
void display(struct stack s);
elementtype viewtop(struct stack s);
void disposestack(struct stack *s);


