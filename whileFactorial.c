#include<stdio.h>
int main(){
    int i,n;
    int factorial=1;
    printf("Enter a positive Number: ");
    scanf("%d",&n);
    i=1;
    while(i<=n){

        factorial=factorial*i;
        i++;
    }
    printf("Factorial= %d",factorial);
    return 0;


}

