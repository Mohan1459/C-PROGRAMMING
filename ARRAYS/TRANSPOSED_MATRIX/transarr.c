#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int a[2][3],b[3][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the elements:");
            scanf("%d",&a[i][j]);
        }
    }//Transposing the matrix
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            b[j][i]=a[i][j];

        }
    }//printing the transposed matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

