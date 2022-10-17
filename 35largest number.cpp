#include<stdio.h>
int main(){
    double n1,n2,n3;
    printf("enter the number");
    scanf("%1f %1f %1f",&n1,&n2,&n3);
    if(n1>=n2&&n1>=n3)
        printf("%.21f is the largest number",n1);
    else if(n2>=n1&&n2>=n3)
        printf("%.21f is the largest number",n2);
    else
        printf("%.21f is the largest number",n3);
    return 0;
}
