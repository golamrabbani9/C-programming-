#include<stdio.h>
int main()
{
    int array[100];
    int i,n;
    int sum=0;
    printf("Enter the numbers: ");
    scanf("%d",&n);
    for (i=0;i<n;i++ ){
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }

    printf("sum =%d",sum);

    return 0;
}
