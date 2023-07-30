#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f=1,fact=1,no;

    printf("Enter the number: ");
    scanf("%d",&no);

    do
    {
        fact=fact*f;
        f++;

    }while(f<=no);

    printf("\nfactorial of %d is %d",no,fact);

    printf("\n");


    return 0;
}
