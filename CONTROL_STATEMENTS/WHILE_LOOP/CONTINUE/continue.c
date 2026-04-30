//continue using the for loop
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a,sum=0;
        for(i=1;i<=5;i++)
        {
        printf("Enter the Integer:");
        scanf("%d",&a);
        if(a<0)
        {
            continue;
        }
        sum=sum+a;
        }
    printf("sum=%d\n",sum);
    return 0;
}
