#include <stdio.h>
#include <stdlib.h>

int main()
{
    char empname[30];
    float bs,ns,inc;
    //input
    printf("Enter the employee name: ");
    scanf("%s",&empname);

    printf("Enter the basic salary: ");
    scanf("%f",&bs);

    if(bs>=10000)
        inc=bs*0.15;
    else if(bs>=5000)
        inc=bs*0.10;
    else
        inc=bs*0.05;

    ns=bs+inc;

    printf("\nEmployee name: %s",empname);
    printf("\nBasic salary: %.2f",bs);
    printf("\nNew salary: %.2f",ns);


    return 0;
}
