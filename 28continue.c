#include<stdio.h>
int main()
{
    int i;
    double number,sum=0.0;
    for(i=1;i<=10;++i){
                printf("enter a n%d",i);
    scanf("%1f",&number);
    if(number<0.0)
    {
        continue;
    }
    sum+=number;
    }
    printf("sum=%.21f",sum);
    return 0;
}
