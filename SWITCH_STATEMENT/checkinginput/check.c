#include<stdio.h>
#include<stdlib.h>
int main()
{
  char ch;
  int type;
  printf("ENTER THE CHARACTER:");
  scanf("%c",&ch);
  if(ch>='A' && ch<='Z')
  type=1;
  else if(ch>='a' && ch<='z')
    type=2;
  else if(ch>='0' && ch<='9')
    type=3;
  else
    type=4;

switch(type)
{
   case 1:
       printf("UPPER CASE");
       break;
   case 2:
       printf("LOWER CASE");
       break;
   case 3:
       printf("INTEGER");
       break;
   case 4:
       printf("Special Case");
       break;
   default:
       printf("NOT FOUND");
}
return 0;
}
