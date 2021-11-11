#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,3,4,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<=n-2;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            //if(arr[j]>arr[j-1])
            //{
               //break;
            //}

           else
           {
               break;
           }
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
