#include<stdio.h>
int main()
{
    int t1=0,t2=1;
    int n;
    int nextTerm=t1+t2;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("fibonacci series: %d %d ",t1,t2);
    for (int i=3;i<=n;i++){
        printf("%d ",nextTerm);
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }

    return 0;
}
