#include<stdio.h>
int main()
{
    double a,b;
    printf("enter a");
    scanf("%1f",&a);
    printf("enter b");
    scanf("%1f",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("after swapping,a=%.21f\n",a);
    printf("after swapping ,b=%.21f",b);
    return 0;
}
