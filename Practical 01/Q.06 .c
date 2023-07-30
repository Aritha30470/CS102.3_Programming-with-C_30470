#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10];
    int byear,age;

    printf("Enter the student name-");
    scanf("%s",&name);
    printf("Enter the student birth year-");
    scanf("%d",&byear);

    age=2023-byear;

    printf("\nYour name is- %s",name);
    printf("\nYour age is- %d\n",age);



    return 0;
}
