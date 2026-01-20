#include <stdio.h>

int main()
{
    int a, b;
    printf("ENTER THE VALUE OF A = ");
    scanf("%d", &a);
    printf("ENTER THE VALUE OF B = ");
    scanf("%d", &b);
    int c = a + b;
    printf("ADDITION_RESULT = %d", c);
    int d = a - b;
    printf("\nSUBTRACTION_RESULT = %d", d);
    int e = a * b;
    printf("\nMULTIPLICATION_RESULT = %d", e);
    float f = (float)a / b;
    printf("\nQUOTIENT = %f", f);
    int g = a % b;
    printf("\nREMAINDER = %d", g);
    int h = a++;
    printf("\nNUMBER AFTER INCREMENT of A = %d", h);
    int h1 = ++a;
    printf("\nINCREMENT BEFORE of A = %d", h1);
    int h2 = a--;
    printf("\nDECREMENT AFTER of A = %d", h2);
    int h3 = --a;
    printf("\nDECREMENT BEFORE of A = %d", h3);
    int i = b++;
    printf("\nNUMBER AFTER INCREMENT of B = %d", i);
    int i1 = ++b;
    printf("\nINCREMENT BEFORE of B = %d", i1);
    int i2 = b--;
    printf("\nDECREMENT AFTER of B = %d", i2);
     int i3 = --b;
    printf("\nDECREMENT BEFORE of B = %d", i3);
    return 0;
}
