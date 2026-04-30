//Length of the string
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name[30];
    int count=0;
    printf("Enter name:");
    gets(name);
    printf("%s",name);
    count=strlen(name);
    printf("\nlength of the string=%d",count);
    return 0;
}
