#include<stdio.h>
int main()
{
    int i,n,a[100];
    int max=a[0];

    printf("enter a terms of array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("maximum = %d",max);
}
