/*Name:S.Vivek Roshan                      Date:    
Class:IT F2                                Roll:11311A12A8
 * queueADT.c*/
#include<stdio.h>
#include<stdlib.h>
#include"queueADT.h"       //including the stackADT.h header file
struct queue createqueue(int m)     //creating the memory
{
        struct queue temp;
        temp.maxsize=m;
        temp.queueelement=(elementtype*)malloc(m*sizeof (elementtype));
        return temp;
}
void initqueue(struct queue *s)     //initialising the stack in function
{
        s->front=0;
	s->rear=0;
}
int empty(struct queue *s)
{
        return(s->rear==0);                //checking wheather it is empty
}
int full(struct queue *s)            //checking wheather it is full
{
        return(s->rear==s->maxsize);
}
void add(struct queue *s,elementtype e)    //function for pushing
{
if(full(s))
        printf("error:over flow");
else
        s->queueelement[s->rear++]=e;
}
elementtype delete(struct queue *s)           //function for popping
{
elementtype e;
int i;
if(empty(s))
{
        printf("error:under flow");
        exit(1);
}
e=s->queueelement[s->front];
for(i=s->front;i<s->rear;i++)
s->queueelement[i]=s->queueelement[i+1];
(s->rear)--;
return e;
}
void display(struct queue s)               //function for display the stack
{
        int i;
        printf("head--->\n");
        for(i=s.front;i<=s.rear-1;i++)
{
showelement(s.queueelement[i]);
}
        printf("-------------------tail");
}
elementtype viewhead(struct queue s)      //function for viewing the top
{
        return(s.queueelement[s.front]);
}
void disposequeue(struct queue *s)   //for disposing the stack
{
        free(s->queueelement);
}

