#include<stdio.h>
int main()
{
    int t1=0,t2=1;
    int i,n;
    int nextTerm= t1+t2;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("The fibonacci series of %dth term : %d %d ",n,t1,t2);
    for(i=3;i<=n;i++){
        printf("%d ",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
    return 0;
}
