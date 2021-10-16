#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f1(y,z) (20+3*y-2*z)/8.0
#define f1(x,z) (33-4*x+z)/11.0
#define f1(x,y) (36-6*x-3*y)/12.0
int main()
{
    printf("The equations are=:\n");
    printf("(20+3*y-2*z)/8.0");
    printf("(33-4*x+z)/11.0");
    printf("(36-6*x-3*y)/12.0");
    float x,y,z,e,e0,e1,e2,e3,x0=0,y0=0,z0=0;
    printf("Enter allowed error:\n");
    scanf("%f",&e);
    int i=0;
    do{
        i++;
        x=f1(y0,z0);
        y=f2(x0,z0);
        z=f3(x0,y0);
        printf("At iteration %d,\t x=%f \t, y=%f \t, z=%f",i,x,y,z);
        e1=fabs(x0-x);
        e2=fabs(y0-y);
        e3=fabs(z0-z);
        x0=x;y0=y;z0=z;
    }while(e<=e1||e<=e2||e<=e3);
    printf("At iteration %d,\t x=%f \t, y=%f \t, z=%f",i,x,y,z);
    return 0;
}
