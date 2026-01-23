#include <stdio.h>

int main()
{
    int number;
    printf("ENTER THE NUMBER=");
    scanf("%0d",&number);
    if(number>=50)
    {
        if(number>=80)
        {
        printf("DISTINCTION");
        }
        else
        {
        printf("EXAM PASSED");
        }
    }
    else
    {
        printf("FAILED");
    }
    return 0;
}
