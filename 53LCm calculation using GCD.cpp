#include<stdio.h>
int main()
{
    int n1,n2,i,gcd,lcm;
    printf("enter two positive integer");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;++i){
        if(n1%i==0&&n2%i==0)
            gcd=1;
    }
    lcm=(n1*n2)/gcd;
    printf("the LCM of two number%d and %d ",n1,n2,lcm);
    return 0;
}
