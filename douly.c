#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *first;
void create(int a[],int n)
{
    struct node *t,*last;
    int i;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->prev=first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void insert(struct node *p,int index,int x)
{
    struct node *t;
    int i;
    if(index==0)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else
    {
        for(i=0;i<index-1;i++)
            p=p->next;
        t=(struct node*)malloc(sizeof(struct node));
        t->data=x;
        t->prev=p;
        t->next=p->next;
        p->next=t;
        if(p->next)
            p->next->prev=t;
    }
}
void del(struct node *p,int index)
{
    int x,i;
    if(index==1)
    {
        first=first->next;
        if(first->next)
            first->prev=NULL;
        x=p->data;
        free(p);
    }
    else
    {
        for(i=0;i<index-1;i++)
            p=p->next;
        p->prev->next=p->next;
        if(p->next)
            p->next->prev=p->prev;
        x=p->data;
        free(p);
    }
    return x;
}
int main()
{
    int a[]={22,33,11,7};
    create(a,4);
    insert(first,0,00);
    del(first,5);
    display(first);
}
