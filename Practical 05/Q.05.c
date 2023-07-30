#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num,digit,n,r=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    n=num;

    do
    {
        digit=num%10;
        r=r*10+digit;
        num=num/10;
    }
    while(num>0);

    printf("\nThe reverse number of %d is %d",n,r);
    printf("\n");

    return 0;
}
