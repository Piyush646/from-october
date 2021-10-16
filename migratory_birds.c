#include <stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    int a[n];
    int count[6]={0};
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if (a[i]==a[j])
            c++;
            count[a[i]]=c;
        }
    }
    int ans;
    int max=count[5];
    for(i=5;i>0;i--)
    {
        if(max<=count[i])
        {
        max=count[i];
        ans=i;
        }
    }
    printf("%d",ans);
}
