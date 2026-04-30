//Comparing two strings without using the strcmp function
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int flag=0,i;
    char s1[30];
    char s2[30];
    printf("Enter the string1:");
    gets(s1);
    printf("Enter the string2:");
    gets(s2);
    for(i=0;s1[i]!='\0' || s2[i]!='\0';  i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
        {
            printf("strings are not same");
        }
        else
        {
            printf("strings are same");
        }
    return 0;
}

