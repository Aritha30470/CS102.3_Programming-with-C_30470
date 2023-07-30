#include <stdio.h>
#include <stdlib.h>

int main()
{
    float avg,dis,time;
    printf("Enter the Distance:-");
    scanf("%f",&dis);
    printf("Enter the Time:-");
    scanf("%f",&time);

    avg=dis/time;

    printf("\nAverage speed is:- %0.2f ms-1\n",avg);
    return 0;
}
