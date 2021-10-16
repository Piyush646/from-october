#include<stdio.h>
#include<math.h>
int main()
{
	int n,mid,t,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	mid=(n/2);
	for(i=0;i<mid-1;i++)
	{
		for(j=0;j<mid-1-i;j++)
		{
			if(a[j+1]<a[j])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=mid+1;i<n;i++)
	{
		for(j=mid+1;j<n-i;j++)
		{
			if(a[j+1]>a[j])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
