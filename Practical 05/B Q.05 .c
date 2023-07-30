#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =1, b, c=1,d,e=0,f=0,g;
    char h='%';

    printf("To End The Program Please Enter The Employee Number As -999\n");

    while(c==1)
    {
    printf("\nEnter Employee Number - ");
    scanf("%d", &a);

    if (a != -999)
    {
    printf("Enter The Number Of Hours Worked - ");
    scanf("%d", &b);
    c=1;
    f++;

    if(b<0)
    {
        printf("\nThe Number Of Hours Cannot Be Negative\n");
    }

    else
    {
        if(b>40)
        {
            d=b*200-40*50;
        }
    else
        {
            d=b*150;
        }

    printf("\nEmployee Number - %d\n",a);
    printf("Overtime Payment - Rs.%d\n",d);
    }

    if(d>4000)
        {
            e++;
        }
    }

    if(a==-999)
        {
            c=0;g=(e*100)/f;
            printf("\nThere Are %d %c Employees Whose Overtime Payment Exceeds Rs.4000. \nThe Program Ends Here.",g,h);
        }

    }
    return 0;
}
