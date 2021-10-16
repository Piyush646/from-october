//a[i]+a[j]=a[k]
#include<iostream>
using namespace std;
void sequence(int arr[],int n)
{
    int found=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
            if(arr[i]+arr[j]==arr[k])
            {
                found=1;
                cout<<i+1<<" "<<j+1<<" "<<k+1;
            }
            }
        }
    }
    if(found==0)
        cout<<"No such sequence exists";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sequence(arr,n);
    }
}
