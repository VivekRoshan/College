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
  temp->next=s->head;
  if (empty(s))
   s->tail=temp;
  s->head=temp;
}
void addattail(struct linkedlist *s,elementtype e)
{
  struct listnode *temp;
  if(empty(s))
    addathead(s,e);
  else
  {
     temp=(struct listnode *)malloc(sizeof (struct listnode));
     temp->data=e;
     temp->next=NULL;
     s->tail->next=temp;
     s->tail=temp;
  }
}
void insertafter(struct linkedlist *s,elementtype e)
{
  struct listnode *temp;
  if(s->position!=NULL)
  {
    temp=(struct listnode *)malloc(sizeof(struct listnode));
    temp->data=e;
    temp->next=s->position->next;
    s->position->next=temp;
  }
  else
    printf("error: position not set \n");
}
void insertbefore(struct linkedlist *s,elementtype e)
{
  struct listnode *temp, *mover;
  if(s->position!=NULL)
  {
    mover=s->head;
    if(mover==s->position)
      addathead(s,e);
    else
    {
      while(mover->next!=s->position)
        mover=mover->next;
      temp=(struct listnode *)malloc(sizeof(struct listnode));
      temp->data=e;
      temp->next=s->position;
     mover->next=temp;
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
     free(temp);
   }
}
void deleteattail(struct linkedlist *s)
{
  struct listnode *temp, *mover;
  temp=s->tail;
  mover=s->head;
  if(mover==temp)
    s->head=s->tail=s->position=NULL;
  else
  {
    while(mover->next!=s->tail)
       mover=mover->next;
      s->tail=mover;
      s->tail->next=NULL;
      free(temp);
  }
}
void deletenode(struct linkedlist *s)
{
  struct listnode *temp, *mover;
  if(s->position==NULL)
    printf("error \n");
  else if(s->position==s->head)
    deleteathead(s);
  else if(s->position==s->tail)
    deleteattail(s);
  else
  {
    temp=s->position;
    mover=s->head;
    while(mover->next!=s->position)
     mover=mover->next;
    mover->next=s->position->next;
    free(temp);
    s->position=mover->next;
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
void editnode(struct linkedlist *s)
{
  printf("the existing data is: \n");
  showelement(s->position->data);
  printf("enter new data: \n");
  s->position->data=readelement();
}
void replaceby(struct linkedlist *s,elementtype e,elementtype e1)
{
  search(s,e);
  s->position->data=e1;
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

