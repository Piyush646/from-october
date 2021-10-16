//Implement queue
#include<stdio.h>
#include<stdlib.h>
void enqueue(int *arr,int *front,int *size,int *rear)
{
    if(*rear==*size-1)
    {
        printf("Queue full\n");
    }
    else
    {
        int el;
        printf("Enter element to be inserted\n");
        scanf("%d",&el);
        *rear=*rear+1;
        arr[*rear]=el;
    }
}
void dequeue(int *arr,int *front,int *size,int *rear)
{
    if(*front==*rear)
    {
        printf("Queue empty\n");
    }
    else
    {
        int el2;
        *front=*front+1;
        el2=arr[*front];
        printf("Element deleted is=%d\n",el2);
    }
}
void display(int *arr,int *front,int *size,int *rear)
{
        if(*front==*rear)
    {
        printf("Queue empty\n");
    }
    int i;
    for(i=*front+1;i<=*rear;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[100];
    int ch,size;
    int front=-1;
    int rear=-1;
    printf("Enter the size of queue\n");
    scanf("%d",&size);
    printf("1 for enqueue\n2 for dequeue\n3 for display\n4 for exiting/n");
    ch=0;
    while(ch!=4)
    {
        printf("Enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enqueue(arr,&front,&size,&rear);
                break;
            case 2:
                dequeue(arr,&front,&size,&rear);
                break;
            case 3:
                display(arr,&front,&size,&rear);
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

