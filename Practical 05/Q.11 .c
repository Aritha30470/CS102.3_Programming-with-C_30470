#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nom, i, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &nom);
    if (nom == 0 || nom == 1)
        {
            isPrime = 0;
        }
    else
        {
            for (i = 2; i <= nom / 2; ++i)
        {
            if (nom % i == 0)
        {
    isPrime = 0;
    break;
        }
        }
        }
 if (isPrime) {
 printf("\n%d is a prime number.\n", nom);
 } else {
 printf("\n%d is not a prime number.\n", nom);
 }
    return 0;
}
