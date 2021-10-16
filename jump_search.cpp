#include<iostream>
using namespace std;
void jump(int arr[],int key,int n)
{
    int comp,found=0;
    for(int i=1;i<n;i+=2)
    {

        if(arr[i]==key)
        {
            comp++;
            found=1;
            cout<<"Present  ";
            break;
        }
        else if(arr[i]>key)
        {
            for(int j=i-1;j<i;j++)
            {
                if(arr[j]==key)
                {
                    comp++;
                    found=1;
                    cout<<"Present  ";
                    break;
                }
            }
        }

        else
        {
            comp++;
            if(n%2==1)
        {

                if(arr[i+1]==key)
                {
                    comp++;
                    found=1;
                    cout<<"Present  ";
                    break;
                }

        }

        }
    }
    if(found!=0)
        cout<<comp;
    else
        cout<<"Not Present "<<comp;
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
    jump(arr,key,n);

    }
}
