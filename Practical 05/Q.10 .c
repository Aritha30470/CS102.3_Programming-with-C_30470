#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,I;

    for (I=1 ; I<=5 ; I++)
    {
        for(b=1 ; b<=I ; b++)
        {
            printf("*");
        }
            printf("\n");
    }

    return 0;
}
