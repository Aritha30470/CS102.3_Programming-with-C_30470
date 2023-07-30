#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d=1,mark,tot=0;
    float avg;

    while(d<=10)
    {
        printf("Enter the %d mark: ",d);
        scanf("%d",&mark);
        d++;

        tot=tot+mark;
    }

    avg=(float)tot/10;

    printf("\nAverage is %.2f\n",avg);

    printf("\n");

    if (avg<=50)

        printf("FAIL");

    else

        printf("PASS");


    printf("\n");

    return 0;
}
