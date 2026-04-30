//Print the table using the for loop
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int num,i,a;
  printf("ENTER THE NUMBER:");
  scanf("%d",&num);
  for(i=1;i<=10;i++)
  {
      a=num*i;
      printf("%dx%d=%d\n",num,i,a);
  }
  return 0;
}

