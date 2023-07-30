#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    float num2;
    double num3;
    char abc[15];

    printf("Enter an integer value- ");
    scanf("%d",&num1);
    printf("Enter the float value- ");
    scanf("%f",&num2);
    printf("Enter the double value- ");
    scanf("%lf",&num3);
    printf("Enter the char value- ");
    scanf("%s",&abc);

    printf("\n\nYour integer value is- %d\n",num1);
    printf("Your float value is- %.2f\n",num2);
    printf("Your double value is- %.2lf\n",num3);
    printf("Your char value is- %s\n",abc);

    return 0;
}
