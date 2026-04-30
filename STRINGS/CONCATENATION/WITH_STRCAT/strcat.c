//concatenation of the string  using the strcat to print 3 characters of the source string;
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[30];
    char s2[6];
    printf("enter the string1:");
    gets(s1);
    printf("enter the string2:");
    gets(s2);
    strncat(s1,s2,3);
    printf("%s",s1);
    return 0;
}
