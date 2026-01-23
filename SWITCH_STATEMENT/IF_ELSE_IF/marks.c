#include <stdio.h>

int main()
{
    int number;
    printf("ENTER THE NUMBER=");
    scanf("%0d",&number);
    if(number>=80 && number<=100)
    {
        printf("Congrats! YOU SCORED GRADE A");
    }
    else if(number>=60 && number<=80)
    {
        printf("Congrats! YOU SCORED GRADE B");
    }
    else if(number>=40 && number<=60)
    {
        printf("YOU SCORED GRADE C");
    }
    else if(number>=20 && number<=40)
    {
        printf("YOU SCORED GRADE D");
    }
    return 0;
}
