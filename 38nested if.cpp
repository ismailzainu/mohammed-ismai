#include<stdio.h>
int main(){
    double num;
    printf("enter a number");
    scanf("%1f",&num);
    if(num<=0.0){
        if(num==0.0)
            printf("you entered 0.");
            else
                printf("you entered a negative number");

    }
    else
        printf("you entered a positive number");
    return 0;
}
