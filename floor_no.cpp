#include<iostream>
using namespace std;

int findFloorNo(int arr[],int target,int n)
{
    if(target<arr[0])
        return -1;
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
    return arr[e];
}

int main()
{
    int arr[]={2,3,6,8,34,67};
    int target=1;
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=findFloorNo(arr,target,n);
    cout<<"The Floor is= "<<ans;
}
