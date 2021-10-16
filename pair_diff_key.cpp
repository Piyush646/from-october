#include<iostream>
using namespace std;
void diff(int arr[],int n,int key)
{
    int coun=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            if(arr[i]-arr[j]==key)
            {
                coun++;
            }
        }
    }
    cout<<coun;
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
    diff(arr,n,key);

    }
}
