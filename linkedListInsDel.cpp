#include<iostream>
using namespace std;
struct node
{
int data;
node *next;
}*first =NULL;
    node *last=NULL;
void insertLast(int val)
{
    node *t=new node;
    t->data=val;
    t->next=NULL;
    if(first==NULL)
    {
        first=last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
int deletePos(int pos)
{
    node *p,*q;
    int x;
    p=first;
    q=NULL;
    if(pos==1)
    {
        first=first->next;
        x=p->data;
        delete(p);
    }
    else
    {
        int i;
        for(i=1;i<=pos-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete(p);
    }
    return x;
}
void display()
{
    node *p=first;
    while(p!=NULL)
    {
        cout<<p->data<<"-->";
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    display();
    insertLast(4);
    insertLast(8);
    insertLast(12);
    insertLast(16);
    insertLast(20);
    deletePos(2);
    insertLast(24);
    display();
}

