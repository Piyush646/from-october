#include<iostream>
using namespace std;
int * Rearrange(int *arr,int n){
    int i,c,j,cA2=0,cA3=0;
    int a2[n];
    int a3[n];
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
        if(i==(*(arr+j)))
        c++;
        }
        if(c>0)
        {
          cA2++;
          a2[cA2]=i;
        }
        else
        {
            cA3++;
            a3[cA3]=i;
        }
        for(i=0;i<cA2;i++)
        {
            *(arr+(a2[i]))=a2[i];
        }
        for(i=0;i<cA3;i++)
        {
            *(arr+(a3[i]))=-1;
        }
    }
    return arr;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int *b=Rearrange(a,n);
        for(int i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}
