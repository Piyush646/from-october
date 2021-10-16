#include<iostream>
using namespace std;
void paire(int arr[],int n,int key)
{
    int found=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
             if(arr[i]+arr[j]==key)
             {
                 found=1;
                cout<<arr[i]<<" "<<arr[j];
                break;
             }
            }
        }
        if(found==1)
           break;
    }
    if(found==0)
    cout<<"No such elements exist";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    paire(arr,n,key);
}
