#include<stdio.h>
int main()
{
    int dividend,divisor,quotient,remainder;
    printf("enter the divident");
    scanf("%d",&divident);
    printf("enter divisor");
    scanf("%d",&divisor);
    quotient=divident/divisor;
    remainder=dividend%divisor;
    printf("quotient=%d\n",quotient);
    printf("remainder=%d",remainder);
    return 0;
}
