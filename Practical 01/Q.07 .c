#include <stdio.h>
#include <stdlib.h>

int main()
{    int num1,num2,temp;

    printf("Enter the first number:- ");
    scanf("%d",&num1);

    printf("Enter the second number:- ");
    scanf("%d",&num2);

    printf("\n\nBefore swap:- \nnum1= %d, num2= %d\n", num1, num2);


    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swap:- \nnum1= %d, num2= %d\n", num1, num2);

    return 0;
}
