#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=0,n2=1,n3,i;

    printf("fibonacci series");

    for( i=1 ; i<=10 ; i++)
    {
        printf(" %d ",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }

    printf("\n");
    return 0;
}
