#include<stdio.h>
int main()
{
    int n,i;
    unsigned long long fact=1;
    printf("enter an integer");
    scanf("%d",&n);
    if(n<0)
        printf("error! factorial of a negative number doesnot exit");
    else{
        for(i=1;i<=0;++i){
            fact*=i;
        }
        printf("factorial of %d=%11u",n,fact);

    }
    return 0;
}
