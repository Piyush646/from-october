//Implement stack
#include<stdio.h>
#include<stdlib.h>
void push(int *arr,int *top,int *size)
{
    if(*top==*size-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        int el;
        printf("Enter element to be pushed\n");
        scanf("%d",&el);
        *top=*top+1;
        arr[*top]=el;
    }
}
void pop(int *arr,int *top,int *size)
{
    if(*top==-1)
    {
        printf("Stack empty\n");
    }
    else
    {
        int el2;
        el2=arr[*top];
        printf("Poped element is: %d\n",el2);
        *top=*top-1;
    }
}
void display(int *arr,int *top,int *size)
{
    int i;
     if(*top==-1)
    {
        printf("Stack empty\n");
    }
    for(i=0;i<=*top;i++)
    {
        printf("%d\n",arr[i ]);
    }
}
int main()
{
    int arr[100];
    int ch,size,top=-1;
    printf("Enter the size of stack\n");
    scanf("%d",&size);
    printf("1 for push\n2 for pop\n3 for display\n4 for exiting/n");
    ch=0;
    while(ch!=4)
    {
        printf("Enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push(arr,&top,&size);
                break;
            case 2:
                pop(arr,&top,&size);
                break;
            case 3:
                display(arr,&top,&size);
                break;
            case 4:
                printf("Exited\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 1;
}
