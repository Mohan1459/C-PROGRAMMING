// To print an array in reverse order
#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{
    int a[N],i;
    for(i=0;i<5;i++)
    {
        printf("Enter the array elements:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("array elements at %d index=%d\n",i,a[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("array elements at %d index=%d\n",i,a[i]);
    }
    return 0;
}
