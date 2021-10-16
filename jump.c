#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,x,j,pos=-1;
	scanf("%d",&n);
	int a[n];
	printf("Enter sorted array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter element to be searched\n");
	scanf("%d",&x);
	for(i=0;i<n;i=i+(int)sqrt((double)n));
	{
		if(x<a[i])
		{
			for(j=i-(int)sqrt((double)n);j<i;j++)
			{
				if(a[j]==x)
				{
					pos=j;
				}
			}
		}
		if(pos!=-1)
		break;
	}
	if(pos!=-1)
	printf("Element present at= %d position. \n",pos);
	else
	printf("Element not present\n");
	return -1;
}
