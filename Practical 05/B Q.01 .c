#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, positivec = 0, negativec = 0, zeroc = 0, num[10];
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
    scanf("%d", &num[i]);
    }
    for (i = 0; i < 10; i++)
    {
    if (num[i] > 0)
    {
    positivec++;
    }
    else if (num[i] < 0)
    {
    negativec++;
    }
    else
        {
    zeroc++;
    }
    }
    printf("\nPositive numbers: %d\n", positivec);
    printf("Negative numbers: %d\n", negativec);
    printf("Zeros: %d\n", zeroc);

    return 0;
}
