#include<stdio.h>
int main(){
    double n1,n2,n3;
    printf("enter three number");
    scanf("%1f %1f %1f",&n1,&n2,&n3);
    if(n1>=n2){
            if(n1>=n3)
            printf("%.21f is largest number",n1);
    else
        printf("%.21f is largest number",n3);
    }
    else{
        if(n2>=n3)
            printf("%.21f is largest number",n2);
        else
            printf("%.21f is largest number",n3);

    }
}
