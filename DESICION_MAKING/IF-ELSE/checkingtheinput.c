#include<stdlib.h>
#include<conio.h>
int main()
{
  char ch;
  printf("Enter the character:");
  scanf("%c",&ch);
  if(ch>='A' && ch<='Z')
  {
     printf("Upper case\n");
     printf("%c",ch);
  }
  else if(ch>='a' && ch<='z')
  {
     printf("Lowercse\n");
     printf("%c",ch);
  }
  else if(ch>='0' && ch<='9')
  {
      printf("INTEGER\n");
      printf("%c",ch);
  }
  else
  {
      printf("Special Character");
  }
  return 0;
}
