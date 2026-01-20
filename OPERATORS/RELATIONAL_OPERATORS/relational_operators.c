#include <stdio.h>

int main()
{
    int a,b;
    printf("ENTER THE VALUE OF A=");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B=");
    scanf("%d",&b);
    printf("THE VALUE OF A=%0d\nTHE VALUE OF B=%0d\n",a,b);
    printf("EQUALITY OPERATION=%0d\n",a==b);
    printf("INEQUALITY OPERATION=%0d\n",a!=b);
    printf("GREATER THAN OPERATION=%0d\n",a>b);
    printf("LESS THAN OPERATION=%0d\n",a<b);
    printf("GREATER THAN OR EQUAL=%0d\n",a>=b);
    printf("LESS THAN OR EQUAL=%0d\n",a<=b);
    return 0;
}
