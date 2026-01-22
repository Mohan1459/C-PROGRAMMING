#include<stdio.h>
int main()
{
    int a,b;
    printf("ENTER THE VALUE OF A=");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B=");
    scanf("%d",&b);
    b^=a;//b=b^a;
    printf("The value of b=%0d",b);
    return 0;
}
