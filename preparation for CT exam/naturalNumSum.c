#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter a positive Number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("The Summation of first %d'th Number is= %d",n,sum);



    return 0;
}
