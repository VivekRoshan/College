/*Name:S.Vivek Roshan                           Date:
Class:IT F2                                   Roll:11311A12A8
 * queueADT.h*/
#include<stdio.h>
#include<stdlib.h>
#include"element.h"       //including the element.h
struct queue               //structure of the stack
{
        int maxsize;       //members
        int front;
	int rear;
        elementtype *queueelement;
};                                  //all the prototypes
struct queue createqueue(int m);
void initqueue(struct queue *s);
int empty(struct queue *s);
int full(struct queue *s);
void add(struct queue *s,elementtype e);
elementtype delete(struct queue *s);
void display(struct queue s);
elementtype viewhead(struct queue s);
void disposequeue(struct queue *s);

