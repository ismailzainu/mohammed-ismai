#include<stdio.h>
int main(){
    double num;
    printf("enter a number");
    scanf("%1f",&num);
    if(num<0.0)
        printf("you entered a negative number");
    else if(num>0.0)
        printf("you entered a positive number");
    else
        printf("you enter o.");
    return 0;
}


