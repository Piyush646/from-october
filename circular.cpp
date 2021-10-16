#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head=NULL;

void create(int a[],int n)
{
    struct node *t,*last;
    head=new node;
    head->data=a[0];
    head->next=head;
    last=head;
    for (int i=1;i<n;i++)
    {
        t=new node;
        t->data=a[i];
        t->next=head;
        last->next=t;
        last=t;
    }
}

void display(struct node *p)
{
do
{
    cout<<p->data<<"-->";
    p=p->next;
}
while(p!=head);
cout<<"\n";
}
void insert(int pos,int value)
{
    struct node *t=new node;
    struct node *p=head;
    if(pos==0)
    {
        t->data=value;
        t->next=head;
        while(p->next!=head)
            p=p->next;
        p->next=t;
        head=t;
    }
    else
    {
        for(int i=1;i<=pos-1;i++)
        {
            p=p->next;
        }
        t->data=value;
        t->next=p->next;
        p->next=t;
    }
}

void del(int pos)
{
    struct node *p=head;
   if(pos==1)
   {
       while(p->next!=head)
            p=p->next;
        p->next=head->next;
        delete(head);
      head=p->next;
   }
   else
    {
        struct node *q;
        for(int i=1;i<=pos-2;i++)
            p=p->next;
        q=p->next;
        p->next=q->next;
        delete(q);
    }
}
int main()
{
    int a[]={22,33,44,55,66};
    //display(head);
    create(a,5);
    display(head);
    insert(0,111);
    display(head);
    insert(6,111);
    display(head);
    insert(6,1111);
    display(head);
    del(8);
    display(head);
    del(7);
    display(head);
    del(1);
    display(head);
    return 0;
}

