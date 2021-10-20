#include<iostream>
using namespace std;

int findCeilingNo(int arr[],int target,int n)
{
    int start=0;
    int e=n-1;
    while(start<=e)
    {
        int m=start+(e-start)/2;
        if(target==arr[m])
            return arr[m];
        else if(target>arr[m])
            start=m+1;
            else
            e=m-1;
    }
    return arr[start];
}

int main()
{
    int arr[]={2,3,6,8,34,67};
    int target=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=findCeilingNo(arr,target,n);
    cout<<"The Ceiling is= "<<ans;
}
