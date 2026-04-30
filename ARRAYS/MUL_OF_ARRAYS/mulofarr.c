// Multiplication of the matrix
#include<stdio.h>
#include<stdlib.h>
#define N 50
int main()
{
    int i,j,m,n,p,q,k,sum=0;
    int a[N][N],b[N][N],c[N][N];
    printf("enter the rows of first matrix:");
    scanf("%d",&m);
    printf("Enter the columns of first matrix:");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
           printf("Enter the elements of the first matrix:");
           scanf("%d",&a[i][j]);
       }
    }
    printf("\nThe first matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
         printf("%d\t",a[i][j]);
        }
         printf("\n");
    }


    printf("Enter the rows of second matrix:");
    scanf("%d",&p);
    printf("Enter the columns of second matrix");
    scanf("%d",&q);
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("Enter the elements of the second matrix:");
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe second matrix is:\n");
     for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
         printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
   if(n!=p)
   {
       printf("Error:Matrix multiplication is not possible");
   }
   else
   {
       for(i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
           {
               sum=0;
               for(k=0;k<m;k++)
               {
               sum=sum+a[i][k]*b[k][j];
               c[i][j]=sum;
               }
           }
       }
       printf("\nThe multiplication matrix is:\n");
       for(i=0;i<m;i++)
       {
           for(j=0;j<q;j++)
           {
                printf("%d\t",c[i][j]);
           }
          printf("\n");
       }
   }
    return 0;

}
