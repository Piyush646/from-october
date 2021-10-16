#include<iostream>
using namespace std;

struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*first=NULL;

void create(int a[],int n)
{
    node *last,*t;
    first=new node;
    first->prev=NULL;
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=a[i];
        t->prev=last;
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(node *p)
{
    while(p)
    {
        cout<<p->data<<"--> ";
        p=p->next;
    }
    cout<<"\n";
}
void insert(int pos,int value)
{
    node *t=new node;
    if(pos==0)
    {
        t->data=value;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else
    {
        node *p=first;
        for(int i=1;i<=pos-1;i++)
        {
            p=p->next;
        }
        t->data=value;
        t->prev=p;
        t->next=p->next;
        if(p->next)
        {
           p->next->prev=t;
        }

        p->next=t;
    }
}
void delet(int pos)
{
    node *p=first;
    if(pos==1)
    {
        first=first->next;
        delete(p);
        if(first->prev)
        first->prev=NULL;
    }
    else
    {
        for(int i=1;i<=pos-1;i++)
        {
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next)
        p->next->prev=p->prev;
        delete(p);
    }
}
int main()
{
    int a[5]={23,67,46,7,78};
    display(first);
    create(a,5);
    display(first);
    insert(0,55);
    display(first);
    insert(5,98);
    display(first);
    insert(7,77);
    display(first);
    delet(7);
    display(first);
    delet(7);
    display(first);
    delet(1);
    display(first);
    return 0;
}

