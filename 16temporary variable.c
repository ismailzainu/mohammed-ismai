#include<stdio.h>
int main()
{
    double first,second,temp;
    printf("enter the first number");
    scanf("%1f",&first);
    printf("enter the second number");
    scanf("%1f",&second);
    temp=first;
    first=second;
    second=temp;
    printf("\nafter swapping,first number=%.21f\n",first);
    printf("after swapping ,second number=%.21f",second);
    return 0;
}
