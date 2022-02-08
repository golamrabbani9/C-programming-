#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n>0)
        printf("%d is a positive Number",n);
    else if(n==0)
        printf("This is zero");
    else
        printf("%d is a negative number",n);

    return 0;
}
