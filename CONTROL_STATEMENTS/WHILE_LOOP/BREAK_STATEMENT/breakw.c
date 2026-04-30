#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,sum=0;
    while(1)
    {
        printf("Enter the Integer:");
        scanf("%d",&a);
        if(a<0)
        {
            break;
        }
        sum=sum+a;
    }
    printf("sum=%d\n",sum);
    return 0;
}

