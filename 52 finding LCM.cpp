#include<stdio.h>
int main()
{

    int n1,n2,max;
    printf("enter two positive integer");
    scanf("%d%d",&n1,&n2);
    max=(n1>n2)?n1:n2;
    while(1){
        if (max %n1==0&&max % n2==0){
            printf("the LCM od %d and %d",n1,n2,max);
            break;

        }
        ++max;
    }
    return 0;
}
