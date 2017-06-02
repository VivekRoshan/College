#include<stdio.h>
#include<stdlib.h>
#include"linkedlistADT.h"

void initlinkedlist(struct linkedlist *s)
{
  s->head=NULL;
  s->tail=NULL;
  s->position=NULL;
}

int empty(struct linkedlist *s)
{
  return(s->head==NULL);
}
void addathead(struct linkedlist *s,elementtype e)
{
  struct listnode *temp;
  temp=(struct listnode *)malloc(sizeof(struct listnode));
  temp->data=e;
  temp->prev=NULL;
  temp->next=s->head;
  if (empty(s))
   s->tail=temp;
  else
   s->head->prev=temp;
   s->head=temp;
}
void addattail(struct linkedlist *s,elementtype e)
{
  struct listnode *temp;
  temp=(struct listnode *)malloc(sizeof (struct listnode));
  temp->data=e;
  temp->next=NULL;
  temp->prev=s->tail;
  if(empty(s))
	s->head=temp;
  else
	s->tail->next=temp;
  s->tail=temp;
}
void insertafter(struct linkedlist *s,elementtype e)
{
  struct listnode *temp;
  if(s->position!=NULL)
  {
	if(s->position==s->tail)
		addattail(s,e);
	else
	{
		temp=(struct listnode *)malloc(sizeof(struct listnode));
		temp->data=e;
		temp->prev=s->position;
		temp->next=s->position->next;
		s->position->next->prev=temp;
		s->position->next=temp;
	}
  }
	else
	printf("error: position not set \n");
}
void insertbefore(struct linkedlist *s,elementtype e)
{
  struct listnode *temp;
  if(s->position!=NULL)
  {
    if(s->position==s->head)
      addathead(s,e);
    else
    {
      temp=(struct listnode *)malloc(sizeof(struct listnode));
      temp->data=e;
      temp->next=s->position;
      temp->prev=s->position->prev;
      s->position->prev->next=temp;
      s->position->prev=temp;
    }
  }
  else
    printf("error: position not set \n");
}
void deleteathead(struct linkedlist *s)
{
   struct listnode *temp;
   if(empty(s))
     printf("error: already empty \n");
   else
   {
     temp=s->head;
     s->head=s->head->next;
     if(s->head!=NULL)
	    s->head->prev=NULL;
     free(temp);
   }
}
void deleteattail(struct linkedlist *s)
{
  struct listnode *temp;
  temp=s->tail;
  if(temp==s->head)
	deleteathead(s);
  s->tail->prev->next=NULL;
      free(temp);
}
void deletenode(struct linkedlist *s)
{
  struct listnode *temp;
  if(s->position==NULL)
    printf("error \n");
  else if(s->position==s->head)
    deleteathead(s);
  else if(s->position==s->tail)
    deleteattail(s);
  else
  {
    temp=s->position;
    s->position->prev->next=s->position->next;
    s->position->next->prev=s->position->prev;
    free(temp);
   }
}
int search(struct linkedlist *s,elementtype e)
{
  s->position=s->head;
  while(s->position!=NULL)
  {
    if(s->position->data==e)
      return 1;
    s->position=s->position->next;
  }
  return 0;
}
void deletebysearch(struct linkedlist *s,elementtype e)
{
  search(s,e);
  deletenode(s);
}
void display(struct linkedlist s)
{
  struct listnode *temp;
  temp=s.head;
  while(temp!=NULL)
  {
    showelement(temp->data);
    temp=temp->next;
  }
}

