#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *lchild;
	int data;
	struct node *rchild;
}*root=NULL;
void insert(struct node*p,int key)
{
	struct node *r=NULL,*t;
	if(root==NULL)
	{
		t=(struct node*)malloc(sizeof(struct node));
		t->data=key;
		t->lchild=NULL;
		t->rchild=NULL;
		root=t;
	}
	else
	{
		while(p)
		{
			r=p;
			if(key<p->data)
			p=p->lchild;
			else if(key>p->data)
			p=p->rchild;
			else
			return;
		}
		t=(struct node*)malloc(sizeof(struct node));
		t->data=key;
		t->lchild=NULL;
		t->rchild=NULL;
		if(t->data>r->data)
		r->rchild=t;
		else
		r->lchild=t;
	}
}
int countNodes(struct node*p)
{
	int x,y;
	if(p)
	{
		x=countNodes(p->lchild);
		y=countNodes(p->rchild);
		return x+y+1;
	}
	else
	{
		return 0;
	}
}
int leafNodes(struct node *p)
{
	int x,y;
	if(p)
	{
		x=leafNodes(p->lchild);
		y=leafNodes(p->rchild);
		if(p->lchild|| p->rchild)
		return x+y+1;
		else
		return x+y;
	}
	else
	{
		return 0;
	}	
}
int leftChild(struct node *p)
{
int x,y;
	if(p)
	{
		x=leftChild(p->lchild);
		y=leftChild(p->rchild);
		if(p->lchild && !p->rchild)
		return x+y+1;
		else
		return x+y;
	}
	else
	{
		return 0;
	}		
}
int rightChild(struct node *p)
{
int x,y;
	if(p)
	{
		x=rightChild(p->lchild);
		y=rightChild(p->rchild);
		if(p->rchild && !p->lchild)
		return x+y+1;
		else
		return x+y;
	}
	else
	{
		return 0;
	}			
}
int rootMoreNodes(struct node*p)
{
	int x,y;
	if(p)
	{
		x=rootMoreNodes(p->lchild);
		y=rootMoreNodes(p->rchild);
		if(p->data > root->data)
		return x+y+1;
		else
		return x+y;
	}
	else
	{
		return 0;
	}
}
int main()
{
	insert(root,13);
	insert(root,3);
	insert(root,4);
	insert(root,12);
	insert(root,14);
	insert(root,10);
	insert(root,5);
	insert(root,1);
	insert(root,8);
	insert(root,2);
	insert(root,7);
	insert(root,9);
	insert(root,11);
	insert(root,6);
	insert(root,182);
	printf("Total nodes= %d\n",countNodes(root));
	printf("Total leaf nodes= %d\n",leafNodes(root));
	printf("having left child only nodes= %d\n",leftChild(root));
	printf("having right child only nodes= %d\n",rightChild(root));
	printf("No. of nodes having info greater than root = %d\n",rootMoreNodes(root));	
	return 0;
}
