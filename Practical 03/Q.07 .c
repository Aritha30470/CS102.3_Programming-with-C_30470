#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sales,service;
    char city[10];
    float basic,allowances,bonus,remuneration;

    printf("Enter the basic salary: ");
    scanf("%f",&basic);
    printf("Enter service period: ");
    scanf("%d",&service);
    printf("Enter monthly sales: ");
    scanf("%d",&sales);
    printf("Enter the city: ");
    scanf("%s",&city);

    if(service>5)
        allowances=0.1*basic;
    else
        allowances=0;
    if(city=='colombo')
    {
        allowances+=2500;
    }
    if(sales<=25000)
        bonus=0.1*sales;
    else if(sales<=50000)
        bonus=0.12*sales;
    else
        bonus=0.15*sales;

    remuneration=basic+allowances+bonus;

    printf("\nGross monthly remuneration: %.2f\n",remuneration);

    return 0;
}
