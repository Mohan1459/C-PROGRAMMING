//Reversing of the string  using the strcat to print 3 characters of the source string;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s1[30];
    char ch;
    int i,l;
    l=strlen(s1);
    printf("Enter the string:");
    gets(s1);
    for(i=0;i<l/2;i++)
    {
        ch=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=ch;
    }
    printf("String after reverse=%s",s1);
    return 0;
