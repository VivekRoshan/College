#include<stdio.h>
#include<stdlib.h>
#include"element.h"

struct treeNode
{
	elementType data;
	struct treeNode *left;
	struct treeNode *right;
};

struct tree
{
	struct treeNode *root;
};

struct treeNode* newTreeNode();

void initTree(struct tree *t);

void fillRoot(struct tree *t);

void buildTreeFrom(struct treeNode *tn);

void buildTree(struct tree *t);

void preOrderFrom(struct treeNode *tn);

void preOrder(struct tree t);

void inOrderFrom(struct treeNode *tn);

void inOrder(struct tree t);

void postOrderFrom(struct treeNode *tn);

void postOrder(struct tree t);

