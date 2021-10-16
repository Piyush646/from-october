#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int strt=0;
	int last=n-1;
	int t;
	while(strt<=last)
	{
		t=a[strt];
		a[strt] = a[last];
		a[last]=t;
		strt++;
		last--;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
