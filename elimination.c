#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter size of matrix\n");
    int n,i,j,k,b;
    scanf("%d",&n);
    int a[n][n+1];
    printf("Enter elements in matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Augmented Matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\n\n");
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
            {
                if(i>j)
                {
                    b=a[i][j]/a[j][j];
                    for(k=1;k<=n+1;k++)
                    {
                        a[i][k]=a[i][k]-(b*a[j][k]);
                    }
                }
            }
    }
    printf("Upper Triangular matrix is:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\n\n");
    float x[n],b1;
    for(i=n;i>=0;i--)
    {
        b1=0;
    for(j=i+1;j<=n;j++)
        b1=b1+a[i][j]*x[j];
    x[i]=(a[i][n+1]-b1)/a[i][i];
    }
    printf("Solution is:\n");
    for(i=1;i<=n;i++)
    {
        printf("x%d = %f\n",i,x[i]);
    }
    return 0;

}
