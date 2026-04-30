#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10,b=9,c;
    int *p,*q;
    p=(&a,&b);
    //q=&b;
    printf("a=%d,b=%d",a,b);
    printf("\na=%d\n",*p);
    printf("address of a=%x\n",&a);
    printf("address of b=%x\n",&b);

    printf("\np=%x\n",p);
    *p=20;
    printf("updated value of a is %d\n",a);
    c=*q;
    printf("%d",c);
    return 0;
}
