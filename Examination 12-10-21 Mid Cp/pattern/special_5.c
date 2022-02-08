#include<stdio.h>
int main()
{
    int factor=1,i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factor=factor*i;

    }
    printf("%d ",factor);

    return 0;
}
