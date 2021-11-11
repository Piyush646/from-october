#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,5,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n-2;i++)
    {
        int lastIndex=n-1-i;
        int maxIndex;
        int maxi=-111111111111111111111;
        for(int j=0;j<=n-1-i;j++)
        {
            if(arr[j]>maxi)
            {
               maxi=arr[j];
               maxIndex=j;
            }

        }
        int temp=arr[lastIndex];
        arr[lastIndex]=arr[maxIndex];
        arr[maxIndex]=temp;

    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
