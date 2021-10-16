#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int seq(int arr[],int n)
{
    int swap=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==i && i==0)
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            swap++;
        }
        if(arr[i]==i && i==n-1)
        {
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            swap++;
        }
        if(arr[i]==i)
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            swap++;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"
    cout<<"\n";
    return swap;

}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int ans=seq(arr,n);
    cout<<ans;
    return 0;
}
