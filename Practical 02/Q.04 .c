#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;

    printf("Enter the fahrenheit temperature:-");
    scanf("%f",&f);
    c=(5.0/9.0)*(f-32.0);

    printf("\nThe celsius temperature is:- %0.2f c\n",c);
    return 0;
}
