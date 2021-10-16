#include<stdio.h>
#include<math.h>
//defining fun which is to be solved
#define f(x) cos(x)-3*x+1
//defining g(x) here
#define g(x) (1+cos(x))/3
int main()
{
    int step=1,maxitr;
    float x0,x1,err;
    printf("Enter initial guess");
    scanf("%f",&x0);
    printf("Enter tolerable error");
    scanf("%f",&err);
    printf("Enter maximum iteration");
    scanf("%d",&maxitr);
    printf("\nSTEP\t\t x0\t\tf(x0)\t\tx1\t\tf(x1)\n");
    do
    {
        x1=g(x0);
        printf("\n%d\t\t %f\t\t%f\t\t%f\t\t%f\n",step,x0,f(x0),x1,f(x1));
        step++;

        if(step>maxitr)
            printf("more iterations needed");
        x0=x1;
    }while(fabs(f(x1))>err);
    printf("The root is=%f",x1);
    return 0;
}
