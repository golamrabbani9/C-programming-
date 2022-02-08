#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the terms: ");
    scanf("%d",&n);
    i=0;
    while (i<=n){
        printf("%d\n\n",i);
        sum=sum+i;
        i++;
    }
    printf("the %dth terms natural number summition: %d",n,sum);

    return 0;
}
