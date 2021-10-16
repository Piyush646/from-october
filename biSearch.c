#include<stdio.h>
int main()
{
	int n,i,l,m,r,x,pos=-1;
	scanf("%d",&n);
	int a[n];
	printf("Enter sorted array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter element to be searched\n");
	scanf("%d",&x);
	r=n-1;
	l=0;
	while(l<=r)
	{
		m=(l+r)/2;
		if(a[m]==x)
		pos=m+1;
		if(a[m]<x)
		l=m+1;
		if(a[m]>x)
		r=m-1;
	}
	if(pos!=-1)
	printf("Element present at= %d position. \n",pos);
	else
	printf("Element not present\n");
}
