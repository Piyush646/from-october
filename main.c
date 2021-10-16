#include <stdio.h>
/*void delete(int *arr,int size)
{
    int i;
    int *ptr=arr;
    int arr2[size];
    int *ptr2=arr2;
    for(i=0;i<size;i++)
    {
    if(i%2!=0)
    {
        *ptr2=*ptr;
        printf("%d ",*ptr2);
        ptr2++;
    }
    ptr++;
    }
}
void input()
{
    int size;
    int arr[size];
    printf("enter size of array\n");
    scanf("%d",&size);
    int i;
    for(i=0;i<size;i++)
    {
        printf("enter array element\n");
        scanf("%d",&arr[i]);
    }
    //delete(arr,size);
}*/
int main(void)
{
    //input();
    int size;
    int arr[size];
    printf("enter size of array\n");
    scanf("%d",&size);
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int arr2[size];

    for(i=0;i<size;i++)
    {
    if(i%2!=0)
    {
        arr2[i]=arr[i];
        printf("%d ",arr2[i]);
    }
    }
   // delete(arr,size);
    return 0;
}
