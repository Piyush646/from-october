#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,t,j,k,l=0;
    char st[30];
    scanf("%[^\n]s", st);
    i=0;
    while (st[i]!='\0')
    {
        l++;
        i++;
    }
    st[l]=' ';
    k=0;
    i=0;
    while (st[i]!='\0')
        {
        if(st[i]==' ')
        {
           for(j=k;j<i;j++)
           {
            printf("%c",st[j]);
           }
           k=i+1;
           printf("\n");
        }

    i++;
    }
    return 0;
}
