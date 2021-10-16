#include<iostream>
using namespace std;
int comp=0,found=0;
int binary(int arr[],int key,int high,int low)
{
    if(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
        {
            //cout<<"Present  ";
            comp++;
            found=1;
            return comp;
        }
        else if(arr[mid]<key)
        {
            comp++;
            int ans2=binary(arr,key,high,mid+1);
            return ans2;
        }
        else
        {
            comp++;
            int ans3=binary(arr,key,mid-1,low);
            return ans3;
        }
    }
    if(found!=0)
    {
        //cout<< "Not Present";
        return 0;
    }
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    int ans=binary(arr,key,n-1,0);
    if(ans>0)
        cout<<"Present  "<<ans;
    else
        cout<<"not Present";
    }
}
