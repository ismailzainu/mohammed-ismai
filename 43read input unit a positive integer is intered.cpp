#include<stdio.h>
int main()
{
    int n,i,sum=0;
    do{
        printf("enter a positive integer");
        scanf("5d",&n);
    }
    while(n<=0);
    for(i=1;i<=n;++i){
        sum+=i;

    }
    printf("sum=%d",sum);
    return 0;
}
