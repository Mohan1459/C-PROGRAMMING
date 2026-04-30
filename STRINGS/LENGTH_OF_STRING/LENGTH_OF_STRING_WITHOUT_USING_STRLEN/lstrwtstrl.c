#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name[30];
    int count=0;
    int i=0;
    printf("Enter name:");
    gets(name);
    puts(name);
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    printf("\nlength of the string=%d",count);
    return 0;
}

