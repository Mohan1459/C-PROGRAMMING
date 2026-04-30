//break statement using the do while loop;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,sum=0;
    do
    {
        printf("Enter the Integer:");
        scanf("%d",&a);
        if(a<0)
        {
            break;
        }
        sum=sum+a;
    }
    while(1);
    printf("sum=%d\n",sum);
    return 0;
}
