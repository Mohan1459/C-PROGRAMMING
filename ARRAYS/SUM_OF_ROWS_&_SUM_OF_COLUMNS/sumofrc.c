#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int a[3][3],sc,sr;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the elements:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("The elements of matrix=%d\t",a[i][j]);
        }
        printf("\n");
    }//Transposing the matrix
     for(i=0;i<3;i++)
     {
         sc=0,sr=0;
         for(j=0;j<3;j++)
         {
         sc=sc+a[j][i];
         sr=sr+a[i][j];
         }
         printf("sum of the rows=%d\n",sr);
         printf("sum of the column=%d\n",sc);
     }
    return 0;
}
