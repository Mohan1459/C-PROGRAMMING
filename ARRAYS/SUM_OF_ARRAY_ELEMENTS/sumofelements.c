//sum of the elements in the array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,sum;
    int a[2][3];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the elements:");
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("sum=%d",sum);
    return 0;
}

