#include<stdio.h>
int main()
{
	int n,k,i,j;
	scanf("%d %d",&n,&k);
	k=k%n;
	int a[n],temp[k];
	for(i=0;i<n;i++)
        scanf("%d",&a[i]);
	for(i=0;i<k;i++)
	{
		temp[i]=a[i];
	}
	for(i=0;i<n-k;i++)
	{
		a[i]=a[i+k];
	}
	for(i=n-k-1,j=0;i<n&&j<k;i++,j++)
	{
		a[i]=temp[j];
	}
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
