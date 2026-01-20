#include <stdio.h>

int main()
{
    int a, b;
    printf("ENTER THE VALUE OF A=");
    scanf("%d",&a);
    printf("\nENTER THE VALUE OF B=");
    scanf("%d",&b);
    printf("\nTHE VALUE OF A=%0d\nTHE VALUE OF B=%0d\n",a,b);
    if(a>0 && b>0)
    printf("\nLOGICAL AND IS TRUE");
    else
    printf("\nLOGICAL AND IS FALSE");
    if(a<9 || b==4)
    printf("\nLOGICAL OR IS TRUE");
    else
    printf("\nLOGICAL OR IS FALSE");
    if(!(b<12))
    printf("\nLOGICAL NOT IS TRUE");
    else
    printf("\nLOGICAL NOT IS FALSE");
    return 0;
}
