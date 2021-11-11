#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<=n-2;i++)//n-2 means n-1 times i will run
    {
        bool swapped=false;
        for(int j=1;j<=n-1-i;j++)//1 bcz in j we r comparing with j-1 and -i bcz 1 element is sorted at each pass so we dont need to check it again
    {
        if(arr[j] < arr[j-1])
        {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            swapped=true;
        }
    }
    if(swapped==false)//to make our best case
        break;
    }

    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}

