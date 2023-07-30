#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,digit,num;

    printf("Enter a number: ");
    scanf("%d",&num);

    do
    {
      digit=num%10;
      sum+=digit;
      num=num/10;
    }while(num>0);

    printf("\nSum of the all digits = %d",sum);

    printf("\n");


    return 0;
}
