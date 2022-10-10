#include<stdio.h>
int main()
{
    double number,sum=0;
    do
    {
           printf("enter a number");
            scanf("%1f",&number);
            sum +=number;
    }
    while(number!=0.0);
    printf("sum =%.21f",sum);
    return 0;
}
