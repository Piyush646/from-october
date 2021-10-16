#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *first=NULL;
struct node *last=NULL;
void insertLast(int x)
{
     struct node *t=(struct node*)malloc(sizeof(struct node));
     t->data=x;
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
int delete(int pos)
{
    int x=-1,i;
    struct node *p,*q;
    if(pos==1)
    {
        p=first;
        first=first->next;
        x=p->data;
        free(p);
    }
    else
    {
        q=NULL;
        p=first;
        for(i=0;i<pos-1&&p;i++)
        {
            q=p;
            p=p->next;
        }
        if(p)
        {
            q->next=p->next;
            x=p->data;
            free(p);
        }
    }
    return x;
}
void display()
{
    struct node *p=first;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
int main()
{
    insertLast(6);
    insertLast(44);
    insertLast(11);
    insertLast(77);
    display();
    delete(3);
    printf("\n");
    display();
}
