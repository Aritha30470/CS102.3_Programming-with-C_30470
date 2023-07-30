#include <stdio.h>
#include <stdlib.h>

int main()
{

    int base,exp,pwr=1,i=1;

    printf("Enter a base number: ");
    scanf("%d",&base);

    printf("Enter the exponent: ");
    scanf("%d",&exp);

    while(i<=exp)
    {
        pwr=pwr*base;
        i++;
    }
    printf("\nThe %d power of %d is %d",exp,base,pwr);

    printf("\n");

    return 0;
}
