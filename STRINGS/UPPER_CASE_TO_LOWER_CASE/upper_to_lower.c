#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ch[30];
    int i;
    printf("Enter the string:");
    fgets(ch,30,stdin);
    for(i=0; ch[i]!='\0';i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
        {
            ch[i]=ch[i]-32;
        }
    }
    printf("%s",ch);
    return 0;
}
