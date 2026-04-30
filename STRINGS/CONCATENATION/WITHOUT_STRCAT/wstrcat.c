//concatenation of the string without using the strcat;
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[30];
    char s2[6];
    int len1,len2,i;
    printf("enter the string1:");
    gets(s1);
    printf("enter the string2:");
    gets(s2);
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0;i<=len2;i++)
    {
        s1[len1+i]=s2[i];
    }
    printf("%s",s1);
    return 0;
}
