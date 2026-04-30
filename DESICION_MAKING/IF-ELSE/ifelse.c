#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter The three integers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("A is the maximum number\n");
            printf("A=%d",a);
        }
        else
        {
            printf("C is the maximum number\n");
            printf("C=%d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("B is maximum number\n");
            printf("B=%d",b);
        }
        else
        {
            printf("C is maximum number\n");
            printf("C=%d",c);
        }
    }
    return 0;
}
