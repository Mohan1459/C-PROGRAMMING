#include <stdio.h>

int main()
{
    int age;
    printf("ENTER YOUR AGE=" );
    scanf("%d",&age);
    if(age>18)
    printf("you are eligible to vote");
    else
    printf("sorry you are not eligible");
    return 0;
}
