/*name:vivek roshan roll:11311A12A8
 * class:it f2 date:16/02/2012 
 * stackADT.c*/
#include<stdio.h>
#include<stdlib.h>
#include"stackADT.h"       //including the stackADT.h header file
struct stack createstack(int m)     //creating the memory
{
	struct stack temp;
	temp.maxsize=m;
	temp.stackelement=(elementtype*)malloc(m*sizeof (elementtype));
	return temp;
}
void initstack(struct stack *s)     //initialising the stack in function
{
	s->top=0;
}
int empty(struct stack *s)
{
	return(s->top==0);                //checking wheather it is empty
}
int full(struct stack *s)            //checking wheather it is full
{
	return(s->top==s->maxsize);
}
void push(struct stack *s,elementtype e)    //function for pushing
{
if(full(s))
	printf("error:over flow");
else
	s->stackelement[s->top++]=e;
}
elementtype pop(struct stack *s)           //function for popping
{
if(empty(s))
{
	printf("error:under flow");
	exit(1);
}
return s->stackelement[--(s->top)];
}
void display(struct stack s)               //function for display the stack
{
	int i;
	printf("top-->\n");
	for(i=s.top-1;i>=0;i--)
{
showelement(s.stackelement[i]);
}
	printf("-------------------------stack");
}
elementtype viewtop(struct stack s)      //function for viewing the top
{
	return(s.stackelement[s.top-1]);
}
void disposestack(struct stack *s)   //for disposing the stack
{
	free(s->stackelement);
}

