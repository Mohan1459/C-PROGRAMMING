#include<stdio.h>
#include<stdlib.h>
int main()
{
  char oper;
  int a,b;
  printf("ENTER THE CHARACTER:");
  scanf("%c",&oper);
  printf("Enter operand values:");
  scanf("%d%d",&a,&b);
switch(oper)
{
   case '+':
       printf("Addition result=%d",a+b);
       break;
   case '-':
       printf("subtraction result=%d",a-b);
       break;
   case '*':
       printf("MULTIPLICATION RESULT=%d",a*b);
       break;
   case '/':
       printf("quotient=%d",a/b);
       break;
   case '%':
       printf("Remainder=%d",a%b);
       break;
   default:
       printf("ENTER VALID OPERATOR");
}
return 0;
}
