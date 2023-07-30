#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area,cir,vol,raduis,p=22/7;
    char select;

    printf("\n Circumference of the circle = c \n");
    printf(" Area of a circle = a \n");
    printf(" Volume of a sphere = v \n");

    printf(" \nChoose What to Calculate: ");
    scanf("%s",&select);

    printf("Enter the raduis: ");
    scanf("%f",&raduis);

    switch(select)
    {
        case 'c':printf("\nCircumference is %.2f",cir=2*p*raduis);
        break;
        case 'a':printf("\nArea is %.2f",raduis*raduis*p);
        break;
        case 'v':printf("\nVolume is %.2f",4/3*p*raduis*raduis*raduis);
        break;
        default:printf("\nEnter a valid calculation\n");

    }


    printf("\n");
    return 0;
}
