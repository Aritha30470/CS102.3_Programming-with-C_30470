#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nom,tot = 0;
    printf("Enter numbers to be added (enter -1 to stop):\n");
    while (1)
{
    scanf("%d", &nom);
    if (nom == -1)
    {
        break;
    }
    tot += nom;
    }
    printf("\nThe Total is: %d\n", tot);
    return 0;
}
