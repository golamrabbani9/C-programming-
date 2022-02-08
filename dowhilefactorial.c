#include<stdio.h>
int main(){
    int i,n;
    int factorial=1;
    printf("Enter a positive Number: ");
    scanf("%d",&n);
    i=1;
    do
    {

        factorial=factorial*i;
        i++;
    }
    while(i<=n);
    printf("Factorial= %d",factorial);
    return 0;
}


