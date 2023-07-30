#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radi;


    printf("Enter the radius of the circle: ");
    scanf("%f", &radi);
    printf("Diameter: %.2f\n",radi*2.0);
    printf("Circumference: %.2f\n",radi*2.0*3.14159);
    printf("Area: %.2f\n", radi*radi*3.14159);


    return 0;
}
