#include <stdio.h>
#include <stdlib.h>

int main()
{
    float no1,no2,avg;

    printf("Enter the first number-");
    scanf("%f",&no1);
    printf("Enter the second number-");
    scanf("%f",&no2);

    avg=(no1+no2)/2;
    printf("\nAvarage is- %.2f \n",avg);

    return 0;
}
