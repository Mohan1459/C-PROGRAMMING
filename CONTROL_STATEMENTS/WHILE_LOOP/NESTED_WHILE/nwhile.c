// nested while loop;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=1,j=1;
       while(i<5)
       {
           while(j<=5)
           {
               printf("j=%d\t",j++);
           }
           printf("i=%d\t",i++);
       }
    return 0;
}
