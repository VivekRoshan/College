#include<stdio.h>
#include<stdlib.h>
#include"element.h"

struct treeNode
{
	int data;
	struct treeNode *left;
	struct treeNode *right;
};

struct BinSerTree
{
	struct treeNode *root;
};

void initBST(struct BinSerTree *t);

void addTree(struct BinSerTree *t, int x);

void buildBST(struct BinSerTree *t);

struct treeNode* insert(struct treeNode *t,int x);

void inOrder(struct BinSerTree t);

void inOrderFrom(struct treeNode *tn);

struct treeNode* delete(struct treeNode *t, int x);

struct treeNode* findMin(struct treeNode *t);

