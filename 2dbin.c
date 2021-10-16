#include <stdio.h>
int main()
{
	int m,n,i,j,pos=-1,l,r,k,mid,o;
	scanf("%d%d",&m,&n);
	int a[m][n],od[m*n];
	scanf("%d",&k);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		od[o]=a[i][j];
		o++;
		}
	}
	r=o-2;
	l=0;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(od[mid]==k)
		{
			pos=1;
			break;
		}
		if(od[mid]<k)
		l=mid+1;
		if(od[mid]>k)
		r=mid-1;
	}
	printf("%d",pos);
}
