#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2;
    char ope;

    printf("Operators: + , - , * , /  ");
    printf("\n\nEnter the operator: ");
    scanf("%c",&ope);

    printf("Enter two numbers: ");
    scanf("%d %d",&no1,&no2);


    switch(ope)

    {
        case '+':printf("\nAddition= %d",no1+no2);
        break;
        case '-':printf("\nSubstraction= %d",no1-no2);
        break;
        case '*':printf("\nMultiplication= %d",no1*no2);
        break;
        case '/':printf("\nDevision= %d",no1/no2);
    }

    printf("\n");

    return 0;
}
