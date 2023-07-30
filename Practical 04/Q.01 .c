#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num,answer;

 printf("Enter the number: ");
 scanf("%d",&num);

 answer=num%2;

    if (answer==0)
        printf("\n%d is a even number",num);
    else
        printf("\n%d is a odd number",num);

    return 0;
}
