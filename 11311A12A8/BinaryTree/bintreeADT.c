#include<stdio.h>
#include<stdlib.h>
#include"bintreeADT.h"

void initBST(struct BinSerTree *t)
{
	t->root=NULL;
}


struct treeNode* insert(struct treeNode *t,int x)
{
        if(t==NULL)
        {
                t=(struct treeNode*)malloc(sizeof(struct treeNode));
                t->data=x;
                t->left=NULL;
                t->right=NULL;
        }
        else if(x<t->data)
                t->left=insert(t->left,x);
        else
               t->right=insert(t->right,x);

	return t;
}

void buildBST(struct BinSerTree *t)
{
	int x;
	struct treeNode *temp;
	printf("enter next integer: ");
	scanf("%d",&x);
	while(x)
	{
		t->root=insert(t->root,x);
		printf("enter next integer: ");
		scanf("%d",&x);
	}
}


void inOrderFrom(struct treeNode *tn)
{
	if(tn!=NULL)
	{
		inOrderFrom(tn->left);
		showElement(tn->data);
		inOrderFrom(tn->right);
	}
}

void inOrder(struct BinSerTree t)
{
	inOrderFrom(t.root);
}

struct treeNode* delete(struct treeNode *t, int x)
{
	struct treeNode *temp;
	if(t==NULL)
		printf("ERROR: node not found\n");
        else if(x<t->data)
                t->left=delete(t->left,x);
        else if(x>t->data)
		t->right=delete(t->right,x);
	else if(t->left && t->right)
	{
		temp=findMin(t->right);
		t->data=temp->data;
		t->right=delete(t->right,t->data);
	}
	else
	{
		temp=t;
		if(t->left==NULL)
			t=t->right;
		else if(t->right=NULL)
			t=t->left;
		free(temp);
	}
	return t;
}

struct treeNode* findMin(struct treeNode *t)
{
	if(t==NULL)
		return NULL;
	else if(t->left==NULL)
		return t;
	else
		return findMin(t->left);
}


