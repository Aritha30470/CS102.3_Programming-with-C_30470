#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    switch(number%2)
    {
        case 1:printf("\n%d is an odd number.\n",number);
        break;
        case 0:printf("\n%d is a even number.\n",number);
        break;
        default:printf("\nEnter a valid number.\n");
    }
    return 0;
}
