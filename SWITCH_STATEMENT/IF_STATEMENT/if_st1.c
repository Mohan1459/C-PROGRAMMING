#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER THE VALUE OF A=");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B=");
    scanf("%d",&b);
    printf("ENTER THE VALUE OF C=");
    scanf("%0d",&c);
    if(a>b && a>c)
    printf("A is largest number");
    if(b>a && b>c)
    printf("B is largest number");
    if(c>a && c>b)
    printf("C is largest number");
    return 0;
}
