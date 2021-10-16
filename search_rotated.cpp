#include <iostream>
using std::cout;
using std::cin;
int pair(int a[],int n,int sum)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        if((a[i]+a[j])==sum)
        return 1;
        }
    }
    return -1;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++)
	cin>>a[i];
	int sum;
	cin>>sum;
	int ans=pair(a,n,sum);
	cout<<ans;
	return 0;
}
