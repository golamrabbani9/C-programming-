#include<stdio.h>
int main(){
    int i,n;
    int factorial=1;
    printf("Enter a positive Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("Factorial= %d",factorial);
    return 0;


}
