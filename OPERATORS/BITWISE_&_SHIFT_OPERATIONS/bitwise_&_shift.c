#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of A=");
    scanf("%d",&a);
    printf("Enter the value of B=");
    scanf("%d",&b);
    printf("\nBITWISE AND OPERATION B/W A & B=%0d",a&b);
    printf("\nBITWISE OR OPERATION B/W A & B=%0d",a|b);
    printf("\nBITWISE AND OPERATION B/W A & B=%0d",a^b);
    printf("\nBITWISE NOT OPERATION B=%0d",~b);
    printf("\nLEFT SHIFT OPERATION OF A=%0d",a<<3);
    printf("\nRIGHT SHIFT OPERATION OF A = %0d",a>>3);
    return 0;
}
