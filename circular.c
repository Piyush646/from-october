#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void create(int a[],int n)
{
    struct node *t,*last;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=a[0];
    head->next=head;
    last=head;
    int i;
    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
void insert(struct node *p,int index,int x)
{
    //here we have not checked if user has entered correct index or not
    struct node *t;
    int i;
    if(index==0)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=x;
        if(head==NULL)
        {
            head=t;
            head->next=head;
        }
        else
        {
            while(p->next!=head)
            {
                p=p->next;
            }
            p->next=t;
            t->next=head;
            head=t;
        }
    }
    else
    {
        for(i=1;i<index-1;i++)
        {
            p=p->next;
        }
        t=(struct node*)malloc(sizeof(struct node));
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
}
int del(int index,struct node *p)
{
    int i,x;
    struct node *q;
    //here also we are not checking for wrong index entered
    if(index==1)
    {
        while(p->next!=head)
            p=p->next;
        x=head->data;
        if(head==p)
        {
            free(head);
            head=NULL;
        }
        else
        {
            p->next=head->next;
            free(head);
            head=p->next;
        }
    }
    else
    {
        for(i=0;i<index-2;i++)
            p=p->next;
        q=p->next;
        p->next=q->next;
        x=q->data;
    }
    return x;
}
void display(struct node *h)
{
    do
    {
        printf("%d ",h->data);
        h=h->next;
    }
    while(h!=head);
    printf("\n");
}
int main()
{
    int a[]={66,34,11};
    create(a,3);
    insert(head,2,221);
    del(1,head);
    display(head);
}
