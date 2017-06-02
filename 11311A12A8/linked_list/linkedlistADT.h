#include<stdio.h>
#include<stdlib.h>
#include"element.h"
struct listnode
{
	elementtype data;
	struct listnode *next;
};
struct linkedlist
{
	struct listnode *head;
	struct listnode *tail;
	struct listnode *position;
};
void initlinkedlist(struct linkedlist *s);
int empty(struct linkedlist *s);
void addathead(struct linkedlist *s,elementtype e);
void addattail(struct linkedlist *s,elementtype e);
void insertafter(struct linkedlist *s,elementtype e);
void insertbefore(struct linkedlist *s,elementtype e);
void deletehead(struct linkedlist *s);
void deletetail(struct linkedlist *s);
void deletenode(struct linkedlist *s);
void deletebysearch(struct linkedlist *s,elementtype e);
void editnode(struct linkedlist *s);
void replaceby(struct linkedlist *s,elementtype e,elementtype e1);
void display(struct linkedlist s);
int search(struct linkedlist *s,elementtype e);





