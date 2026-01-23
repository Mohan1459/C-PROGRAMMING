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
    if( a%2==0 && b%2==0 && c%2==0)
    printf("EVEN NUMBERS");
    else
    printf("ODD NUMBERS");
    return 0;
}
