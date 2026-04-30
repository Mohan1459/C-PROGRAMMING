#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr1[5],arr2[5],sumarr[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the elements of first array:");
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Enter the elements of second array:");
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<5;i++)
    {
        sumarr[i]=arr1[i]+arr2[i];
        printf("sum of the elements at the index %d=%d\n",i,sumarr[i]);
    }
    return 0;
}
