#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is Even Number",n);
    else
        printf("%d is odd number",n);


    return 0;
}
