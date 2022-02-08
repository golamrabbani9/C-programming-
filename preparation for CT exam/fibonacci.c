#include<stdio.h>

int main(){
    int i,n,t1=0,t2=1;
    int nextTerm=t1+t2;
    printf("Enter The Number of Terms: ");
    scanf("%d",&n);


    printf("The Fibonacci Series of %dth term %d %d ",n,t1,t2);

    for(i=3;i<=n;i++){
        printf("%2d ",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;

    }



    return 0;
}
