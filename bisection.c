#include<stdio.h>
#include<math.h>
float fun(float x)
{
    return(x*x*x-x-1);
}
void bisection(float *x,float a,float b,int *itr)
{
    *x=(a+b)/2;
    ++(*itr);
    printf("Iteration no %d ,X=%7.5f\n",*itr,*x);
}
int main()
{
    int itr=0,maxitr;
    float x,a,b,allerr,x1;
    printf("Enter values of a,b,error allowed and maximum no. of iterations :\n");
    scanf("%f%f%f%d",&a,&b,&allerr,&maxitr);
    bisection(&x,a,b,&itr);
    do
    {
        if(fun(a)*fun(b)<0)
            b=x;
        else
            a=x;
        bisection(&x1,a,b,&itr);
        if(fabs(x1-x)<allerr)
        {
            printf("After %d iterations,root=%6.4f\n",itr,x1);
        }
        x=x1;
    }while(itr<maxitr);
    printf("The solutions does not cover or the iterations are not sufficient");
    return 0;
}
