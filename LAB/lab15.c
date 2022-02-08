#include<stdio.h>
int main()
{
    int t1=0,t2=1;
    int n,i;
    int nexTerm=t1+t2;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacchi : %d %d ",t1,t2);
    for (i=3;i<=n;i++){
        printf("%d ",nexTerm);
        t1=t2;
        t2=nexTerm;
        nexTerm=t1+t2;
    }

    return 0;
}
