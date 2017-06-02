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
int empty(struct queue*s)
{
        return(s->rear==s->front);                //checking wheather it is empt
}
int full(struct queue *s)            //checking wheather it is full
{
        return((s->front)==((s->rear+1)%s->maxsize));
}
void add(struct queue *s,elementtype e)    //function for pushing
{
if(full(s))
        printf("error:over flow");
else
        s->queueelement[s->rear++]=e;
	s->rear%=s->maxsize;
}
elementtype delete(struct queue *s)           //function for popping
{
elementtype e;
if(empty(s))
{
        printf("error:under flow");
        exit(1);
}
e=s->queueelement[(s->front)++];
s->front%=s->maxsize;
return e;
}
void display(struct queue s)               //function for display the stack
{
        int i,j;
        printf("head--->\n");
        i=s.front;
	j=s.rear;
	while(i!=j)
	{
		showelement(s.queueelement[i++]);
		i%=s.maxsize;
	}
        printf("rear--->\n");
	}
elementtype viewhead(struct queue s)      //function for viewing the top
{
        return(s.queueelement[s.front]);
}
void disposequeue(struct queue *s)   //for disposing the stack
{
        free (s->queueelement);
}
